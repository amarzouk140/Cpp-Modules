/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:01:42 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/27 14:22:07 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool isValidNumber(const std::string& str) 
{
    if (str.empty()) 
        return false;

    // Check if the string contains only digits
    for (size_t i = 0; i < str.length(); ++i) 
    {
        if (!std::isdigit(str[i])) 
            return false;
    }

    // Check if the number is positive
    int num;
    std::istringstream iss(str);
    if (!(iss >> num) || num <= 0) 
    {
        return false;
    }
    return true;
}

int main(int ac, char** av) 
{
    if (ac < 2)
        return (std::cerr << "Usage: ./PmergeMe <sequence of positive integers>" << std::endl, 1);

    std::vector<int> input;
    try 
    {
        for (int i = 1; i < ac; ++i) 
        {
            std::string arg = av[i];

            // Trim leading and trailing whitespace
            size_t start = arg.find_first_not_of(" \t\n\r");
            size_t end = arg.find_last_not_of(" \t\n\r");
            arg = arg.substr(start, end - start + 1);

            if (!isValidNumber(arg))
                throw std::invalid_argument("Invalid number: " + std::string(av[i]));

            int num;
            std::istringstream iss(arg);
            iss >> num;
            input.push_back(num);
        }
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    PmergeMe sorter;
    sorter.sortAndMeasure(input);

    return 0;
}