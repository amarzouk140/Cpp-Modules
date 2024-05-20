/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:11:37 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:07 by amarzouk         ###   ########.fr       */
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

void ScalarConverter::toChar(const std::string input) {
    try 
    {
        if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0])) 
        {
            char c = input[0];
            std::cout << "char: '" << c << "'" << std::endl;
            return;
        }

        std::string temp = input;
        if (temp[temp.size() - 1] == 'f')
            temp = temp.substr(0, temp.size() - 1);

        char* end;
        double d = strtod(temp.c_str(), &end);
        if (*end != '\0' || d < 0 || d > 127 || std::isnan(d) || std::isinf(d))
            throw std::exception();

        char c = static_cast<char>(d);
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } 
    catch (std::exception & e) 
    {
        std::cout << "char: impossible" << std::endl;
    }
}

void ScalarConverter::toInt(const std::string input) {
    try 
    {
        if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0])) 
        {
            int i = static_cast<int>(input[0]);
            std::cout << "int: " << i << std::endl;
            return;
        }

        std::string temp = input;
        if (temp[temp.size() - 1] == 'f')
            temp = temp.substr(0, temp.size() - 1);

        char* end;
        double d = strtod(temp.c_str(), &end);
        if (*end != '\0' || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max() || std::isnan(d) || std::isinf(d))
            throw std::exception();

        int i = static_cast<int>(d);
        std::cout << "int: " << i << std::endl;
    } 
    catch (std::exception & e) 
    {
        std::cout << "int: impossible" << std::endl;
    }
}

void ScalarConverter::toFloat(const std::string input) {
    try 
    {
        if (input == "-inff" || input == "+inff" || input == "nanf") 
        {
            std::cout << "float: " << input << std::endl;
            return;
        }

        if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0])) 
        {
            float f = static_cast<float>(input[0]);
            std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
            return;
        }

        char* end;
        float f = static_cast<float>(strtod(input.c_str(), &end));
        if (*end != '\0' && (*end != 'f' || *(end + 1) != '\0'))
            throw std::exception();

        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    } 
    catch (std::exception & e) 
    {
        std::cout << "float: impossible" << std::endl;
    }
}

void ScalarConverter::toDouble(const std::string input) 
{
    try 
    {
        if (input == "-inf" || input == "+inf" || input == "nan") 
        {
            std::cout << "double: " << input << std::endl;
            return;
        }

        if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0])) 
        {
            double d = static_cast<double>(input[0]);
            std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
            return;
        }

        std::string temp = input;
        if (temp[temp.size() - 1] == 'f')
            temp = temp.substr(0, temp.size() - 1);

        char* end;
        double d = strtod(temp.c_str(), &end);
        if (*end != '\0')
            throw std::exception();

        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    } 
    catch (std::exception & e) 
    {
        std::cout << "double: impossible" << std::endl;
    }
}

void ScalarConverter::convert(const std::string input) 
{
    toChar(input);
    toInt(input);
    toFloat(input);
    toDouble(input);
}