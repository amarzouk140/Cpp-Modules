/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:01:42 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/27 12:40:33 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char* av[]) 
{
    if (ac < 2)
        return (std::cout << "Usage: ./PmergeMe <sequence of positive integers>" << std::endl, 1);

    std::vector<int> input;
    try 
    {
        for (int i = 1; i < ac; ++i) 
        {
            std::istringstream iss(av[i]);
            int num;
            if (!(iss >> num) || num <= 0)
                throw std::invalid_argument("Invalid number: " + std::string(av[i]));

            input.push_back(num);
        }
    } 
    catch (const std::exception& e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
        return 1;
    }

    PmergeMe sorter;
    sorter.sortAndMeasure(input);

    return 0;
}