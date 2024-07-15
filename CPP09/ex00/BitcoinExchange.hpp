/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:30:07 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/07/15 15:24:41 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <climits> // for INT_MAX
#include <iomanip> // for std::fixed and std::setprecision



class BitcoinExchange 
{
    private:
        std::map<std::string, double> btcData;
        void loadDatabase(const std::string& filename);
        double customStod(const std::string& str) const;
        float customStof(const std::string& str) const;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();

        BitcoinExchange(const std::string& dbFilename);

        void processInput(const std::string& inputFilename) const;
};

#endif
