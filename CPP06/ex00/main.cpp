/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:17:51 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/20 13:50:39 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) 
{
    if (ac != 2) 
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);
    return 0;
}

