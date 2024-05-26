/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:38:21 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/26 22:37:31 by ayman_marzo      ###   ########.fr       */
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


BitcoinExchange::BitcoinExchange(const std::string& dbFilename) {
    loadDatabase(dbFilename);
}


void BitcoinExchange::loadDatabase(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: could not open database file." << std::endl;
        exit(1);
        return;
    }

    std::string line;
    // Skip the header row
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date;
        std::string valueStr;
        float value;

        if (!std::getline(ss, date, ',')) {
            std::cerr << "Error: bad input in database => " << line << std::endl;
            continue;
        }

        if (!std::getline(ss, valueStr)) {
            std::cerr << "Error: bad input in database => " << line << std::endl;
            continue;
        }

        // Convert value to float
        try {
            value = std::stof(valueStr);
        } catch (const std::exception& e) {
            std::cerr << "Error: bad input in database => " << line << std::endl;
            continue;
        }

        btcData[date] = value;
    }
    file.close();
}

void BitcoinExchange::processInput(const std::string& inputFilename) const {
    std::ifstream file(inputFilename);
    if (!file.is_open()) {
        std::cerr << "Error: could not open input file." << std::endl;
        return;
    }

    std::string line;
    // Skip the header row
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date;
        std::string valueStr;
        float value;

        // Read the date
        if (!std::getline(ss, date, '|')) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        // Read the value
        if (!std::getline(ss, valueStr)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        // Trim spaces
        date = date.substr(date.find_first_not_of(" \t"), date.find_last_not_of(" \t") - date.find_first_not_of(" \t") + 1);
        valueStr = valueStr.substr(valueStr.find_first_not_of(" \t"), valueStr.find_last_not_of(" \t") - valueStr.find_first_not_of(" \t") + 1);

        // Convert value to float
        try {
            value = std::stof(valueStr);
        } catch (const std::exception& e) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        // Check for valid date format
        if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        // Check for valid value range
        if (value < 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        // Process the input
        std::map<std::string, float>::const_iterator it = btcData.lower_bound(date);
        if (it != btcData.end() && it->first == date) {
            std::cout << date << " => " << value << " = " << value * it->second << std::endl;
        } else if (it != btcData.begin()) {
            --it;
            std::cout << date << " => " << value << " = " << value * it->second << std::endl;
        } else {
            std::cerr << "Error: date not found in database." << std::endl;
        }
    }
    file.close();
}