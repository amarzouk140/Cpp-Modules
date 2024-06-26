/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:46:24 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/26 13:44:09 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <exception>
#include <stdexcept>
#include <climits>

class Span 
{
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();


    void addNumber(int number);
    template <typename InputIt>
    void addNumbers(InputIt begin, InputIt end); /* add a range of numbers to the Span */
    int shortestSpan() const; /* calculate the smallest and largest differences (or spans) between the elements stored in the Span */
    int longestSpan() const; /* calculate the largest differences (or spans) between the elements stored in the Span */

    void fillRandomNumbers(unsigned int count, int maxValue);
};

#include "Span.tpp"

#endif