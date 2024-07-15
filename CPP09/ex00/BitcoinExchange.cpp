/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:38:21 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/07/15 15:24:14 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) 
{
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) 
{
    if (this != &other)
        this->btcData = other.btcData;
    return *this;
}
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& dbFilename) {loadDatabase(dbFilename);}

void BitcoinExchange::loadDatabase(const std::string& filename) 
{
    std::ifstream file(filename.c_str());
    if (!file.is_open()) 
    {
        std::cerr << "Error: could not open database file." << std::endl;
        exit(1);
    }

    std::string line;
    std::getline(file, line); // Skip the header row

    while (std::getline(file, line)) 
    {
        std::stringstream ss(line);
        std::string date;
        std::string valueStr;
        float value;

        if (!std::getline(ss, date, ',')) 
        {
            std::cerr << "Error: bad input in database => " << line << std::endl;
            continue;
        }

        if (!std::getline(ss, valueStr)) 
        {
            std::cerr << "Error: bad input in database => " << line << std::endl;
            continue;
        }

        // Convert value to float
        try 
        {
            value = customStof(valueStr);
        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Error: bad input in database => " << line << std::endl;
            continue;
        }
        
        btcData[date] = value;
    }
    
    file.close();
}

void BitcoinExchange::processInput(const std::string& inputFilename) const 
{
    std::ifstream file(inputFilename.c_str());
    if (!file.is_open()) 
    {
        std::cerr << "Error: could not open input file." << std::endl;
        return;
    }

    std::string line; 
    std::getline(file, line); // Skip the header row

    while (std::getline(file, line)) 
    {
        std::stringstream ss(line);
        std::string date;
        std::string valueStr;
        double value;

        // Read the date
        if (!std::getline(ss, date, '|')) 
        {
            std::cerr << "Error: bad date => " << line << std::endl;
            continue;
        }

        // Read the value
        if (!std::getline(ss, valueStr)) 
        {
            std::cerr << "Error: bad value => " << line << std::endl;
            continue;
        }

        // Trim spaces
        date = date.substr(date.find_first_not_of(" \t"), date.find_last_not_of(" \t") - date.find_first_not_of(" \t") + 1);
        valueStr = valueStr.substr(valueStr.find_first_not_of(" \t"), valueStr.find_last_not_of(" \t") - valueStr.find_first_not_of(" \t") + 1);

        // Convert value to double
        try 
        {
            value = customStod(valueStr);
        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Error: bad float input => " << line << std::endl;
            continue;
        }

        // Check for valid date format
        if (date.length() != 10 || date[4] != '-' || date[7] != '-') 
        {
            std::cerr << "Error: invalid date => " << line << std::endl;
            continue;
        }

        // Check for valid value range
        if (value < 0) 
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000) 
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        // Process the input
        std::map<std::string, double>::const_iterator it = btcData.lower_bound(date);
        double result = 0;
        if (it != btcData.end() && it->first == date)
        {
            result = value * it->second;
        }
        else if (it != btcData.begin()) 
        {
            --it;
            result = value * it->second;
        }
        else
        {
            std::cerr << "Error: date not found in database." << std::endl;
            continue;
        }

        // Check if result exceeds INT_MAX before casting
        if (result > static_cast<double>(INT_MAX)) 
        {
            std::cout << std::fixed << std::setprecision(2) << date << " => " << value << " = Overflow" << std::endl;
        }
        else
        {
            std::cout << std::fixed << std::setprecision(2) << date << " => " << value << " = " << result << std::endl;
        }
    }
    file.close();
}

double BitcoinExchange::customStod(const std::string& str) const 
{
    std::istringstream iss(str);
    double result;
    iss >> result;
    // Check for any remaining characters after the float value
    if (iss.fail() || !iss.eof() || iss.peek() != std::char_traits<char>::eof())
        throw std::invalid_argument("Invalid float value");
    return result;
}


float BitcoinExchange::customStof(const std::string& str) const 
{
    std::istringstream iss(str);
    float result;
    iss >> result;
    // Check for any remaining characters after the float value
    if (iss.fail() || !iss.eof() || iss.peek() != std::char_traits<char>::eof())
        throw std::invalid_argument("Invalid float value");
    return result;
}

/*
What is std::map::lower_bound?
The lower_bound function in std::map returns an iterator to the first element that is not less than the given key. In other words, it finds the smallest element that is greater than or equal to the specified key.

Call lower_bound("2021-07-01"):

It will search for the first date that is not less than "2021-07-01".
Find the Lower Bound:

The dates in btcData are 2021-01-01, 2021-06-01, and 2021-12-01.
The first date that is not less than "2021-07-01" is "2021-12-01".
So, lower_bound("2021-07-01") will return an iterator to "2021-12-01".

Key Points to Understand
When lower_bound Finds a Match:
If there is a date in the map that exactly matches "2021-07-01", lower_bound will return an iterator to that exact match.
When lower_bound Does Not Find a Match:
If there is no exact match, lower_bound returns an iterator to the first date that is greater than "2021-07-01".
If all dates are less than "2021-07-01", lower_bound will return btcData.end().
Why Use lower_bound?
In the context of BitcoinExchange, you want to find the closest date in your database that is not later than the date you're looking for. This allows you to use historical data to estimate the Bitcoin value for dates that might not be explicitly recorded in your database.


*/