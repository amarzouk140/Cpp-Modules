/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:01:42 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/27 11:07:43 by ayman_marzo      ###   ########.fr       */
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
            int num = std::stoi(av[i]);
            if (num <= 0)
                throw std::invalid_argument("Negative number or zero");
    
            input.push_back(num);
        }
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    PmergeMe sorter;
    sorter.sortAndMeasure(input);

    return 0;
}
