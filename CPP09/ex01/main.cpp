/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:23:01 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/27 06:22:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** av) 
{
    if (ac != 2)
        return (std::cout << "Usage: ./RPN \"expression\"" << std::endl, 1);

    RPN rpn;
    try 
    {
        int result = rpn.evaluate(av[1]);
        std::cout << result << std::endl;
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Error " << e.what() << std::endl;
    }

    return 0;
}


/*
Concept of Reverse Polish Notation (RPN)
Reverse Polish Notation (RPN) is a mathematical notation where operators follow their operands. This notation eliminates the need for parentheses to define operation order, which is required in infix notation (the common notation used in arithmetic expressions). In RPN, the expression is evaluated from left to right using a stack.

How RPN Works
Operands are Pushed onto the Stack:

When a number (operand) is encountered, it is pushed onto the stack.
Operators Apply to Operands on the Stack:

When an operator is encountered, the required number of operands (usually two) is popped from the stack, the operation is performed, and the result is pushed back onto the stack.
Example
Consider the RPN expression: 5 1 2 + 4 * + 3 -

Step-by-Step Evaluation:
Push 5 onto the stack: [5]
Push 1 onto the stack: [5, 1]
Push 2 onto the stack: [5, 1, 2]
Encounter +, pop 2 and 1, push 1 + 2 = 3: [5, 3]
Push 4 onto the stack: [5, 3, 4]
Encounter *, pop 4 and 3, push 3 * 4 = 12: [5, 12]
Encounter +, pop 12 and 5, push 5 + 12 = 17: [17]
Push 3 onto the stack: [17, 3]
Encounter -, pop 3 and 17, push 17 - 3 = 14: [14]
The final result is 14.
*/