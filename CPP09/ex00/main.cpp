/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:21:55 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/26 22:29:15 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av) 
{
    if (ac != 2) 
        return (std::cout << "Usage: ./btc <input_file>" << std::endl, 1);
    
    BitcoinExchange btcExchange("data.csv"); 
    btcExchange.processInput(av[1]);

    return 0;
}