/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:50:14 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/25 22:25:48 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &other) : _maxSize(other._maxSize), _numbers(other._numbers) {}

Span::~Span() {}

Span &Span::operator=(const Span &other) 
{
    if (this != &other) 
    {
        _maxSize = other._maxSize;
        _numbers = other._numbers;
    }
    return *this;
}

void Span::addNumber(int number) 
{
    if (_numbers.size() >= _maxSize) 
        throw std::length_error("Span is already full");
    _numbers.push_back(number);
}

int Span::shortestSpan() const 
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    int shortest = INT_MAX;
    for (size_t i = 1; i < sorted.size(); ++i) 
    {
        int span = sorted[i] - sorted[i - 1];
        
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

int Span::longestSpan() const 
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());

    return max - min;
}