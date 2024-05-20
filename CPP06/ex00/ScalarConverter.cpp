/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:11:37 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/20 13:55:25 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}


ScalarConverter::ScalarConverter(ScalarConverter const & src) {
    *this = src;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & src) {
    (void)src;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::toChar(std::string input) 
{
    try 
    {
        // Check for special cases
        if (input == "nan" || input == "nanf" || input == "+inf" || input == "-inf" || input == "+inff" || input == "-inff")
            throw std::exception();

        // Convert to double to handle cases like '42.0'
        char* end;
        double d = strtod(input.c_str(), &end);
        if (*end != '\0' || d < 0 || d > 127 || std::isnan(d) || std::isinf(d))
            throw std::exception();

        char c = static_cast<char>(d);
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "char: impossible" << std::endl;
    }
}

void    ScalarConverter::toInt(std::string input)
{
    try 
    {
        // Check for special cases
        if (input == "nan" || input == "nanf" || input == "+inf" || input == "-inf" || input == "+inff" || input == "-inff")
            throw std::exception();

        // Convert to double to handle cases like '42.0'
        char* end;
        double d = strtod(input.c_str(), &end);
        if (*end != '\0' || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max() || std::isnan(d) || std::isinf(d))
            throw std::exception();

        int i = static_cast<int>(d);
        std::cout << "int: " << i << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "int: impossible" << std::endl;
    }
}

void    ScalarConverter::toFloat(std::string input)
{
    try 
    {
        if (input == "-inff" || input == "+inff" || input == "nanf") 
        {
            std::cout << "float: " << input << std::endl;
            return;
        }

        std::stringstream ss(input);
        float f;
        if (!(ss >> f) || !(ss.eof()))
            throw std::exception();

        std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "float: impossible" << std::endl;
    }
}

void    ScalarConverter::toDouble(std::string input)
{
    try 
    {
        if (input == "-inf" || input == "+inf" || input == "nan") 
        {
            std::cout << "double: " << input << std::endl;
            return;
        }

        std::stringstream ss(input);
        double d;
        if (!(ss >> d) || !(ss.eof()))
            throw std::exception();

        std::cout << "double: " << static_cast<double>(d) << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "double: impossible" << std::endl;
    }
}

void    ScalarConverter::convert(std::string input) 
{
    toChar(input);
    toInt(input);
    toFloat(input);
    toDouble(input);
}