/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:00:53 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/27 14:29:01 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <algorithm>
#include <ctime>

class PmergeMe 
{
    private:

        template <typename Container>
        void mergeInsertSort(Container& container);

        template <typename Container>
        void measureSortTime(const Container& input, const std::string& containerName);

    public:

        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);

        void sortAndMeasure(const std::vector<int>& input);

};

template <typename Container>
void PmergeMe::mergeInsertSort(Container& container) 
{
    if (container.size() <= 1) 
        return;

    typename Container::iterator mid = container.begin();
    std::advance(mid, container.size() / 2);

    Container left(container.begin(), mid);
    Container right(mid, container.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    container.clear();
    typename Container::iterator it_left = left.begin();
    typename Container::iterator it_right = right.begin();

    while (it_left != left.end() && it_right != right.end()) 
    {
        if (*it_left < *it_right) 
            container.push_back(*it_left++);

        else
            container.push_back(*it_right++);
    }

    container.insert(container.end(), it_left, left.end());
    container.insert(container.end(), it_right, right.end());
}

template <typename Container>
void PmergeMe::measureSortTime(const Container& input, const std::string& containerName) 
{
    Container copy = input;
    std::clock_t start = std::clock();
    mergeInsertSort(copy);
    std::clock_t end = std::clock();
    double duration = 1000000.0 * (end - start) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << input.size() << " elements with " << containerName << ": " << duration << " microseconds" << std::endl;
}

#endif
