/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:16:23 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/27 09:56:23 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <stdexcept>
#include <iostream>

class RPN 
{
public:

    RPN();
    ~RPN();
    RPN(const RPN& other);
    RPN& operator=(const RPN& other);

    int evaluate(const std::string& expression);

private:

    std::stack<int> stack;

    int stringToInt(const std::string& str) const;
    bool isOperator(const std::string& token) const;
    int performOperation(const std::string& operation, int operand1, int operand2) const;
};

#endif