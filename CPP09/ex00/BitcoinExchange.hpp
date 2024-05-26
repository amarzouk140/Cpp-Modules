/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:30:07 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/26 21:51:21 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class BitcoinExchange 

{
    private:
    
        std::map<std::string, float> btcData;
        void loadDatabase(const std::string& filename);
    
    public:
    
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();

        BitcoinExchange(const std::string& dbFilename);

        
        void processInput(const std::string& inputFilename) const;

};

#endif