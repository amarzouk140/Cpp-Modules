/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:23:01 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/27 09:26:36 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** av) 
{
    if (ac != 2)
        return (std::cerr << "Usage: ./RPN \"expression\"" << std::endl, 1);

    RPN rpn;
    try 
    {
        int result = rpn.evaluate(av[1]);
        std::cout << result << std::endl;
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Error" << std::endl;
    }

    return 0;
}
