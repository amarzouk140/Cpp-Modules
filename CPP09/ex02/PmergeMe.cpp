/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:01:23 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/28 00:22:45 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) 
{
    *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) 
{
    if (this != &other) 
    {
        *this = other;
    }
    return *this;
}

void PmergeMe::sortAndMeasure(const std::vector<int>& input) 
{
    std::cout << "Before: "; // print the vector before sorting
    for (std::vector<int>::const_iterator it = input.begin(); it != input.end(); ++it) 
        std::cout << *it << " ";
    
    std::cout << std::endl;

    measureSortTime(input, "std::vector"); // measure the time it takes to sort the vector

    std::list<int> inputList(input.begin(), input.end()); // create a list from the vector
    measureSortTime(inputList, "std::list"); // measure the time it takes to sort the list

    std::cout << "After: ";
    std::vector<int> sortedInput = input;
    
    mergeInsertSort(sortedInput); // sort the vector 
    
    for (std::vector<int>::const_iterator it = sortedInput.begin(); it != sortedInput.end(); ++it) 
        std::cout << *it << " "; // print the sorted vector
 
    std::cout << std::endl;
}
