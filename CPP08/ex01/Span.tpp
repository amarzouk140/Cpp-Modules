/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 22:14:35 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/25 22:22:07 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_TPP
#define SPAN_TPP

#include "Span.hpp"

template <typename InputIt>
void Span::addNumbers(InputIt begin, InputIt end) 
{
    if (std::distance(begin, end) + _numbers.size() > _maxSize) 
        throw std::length_error("Adding range would exceed Span capacity");
    _numbers.insert(_numbers.end(), begin, end);
}

#endif