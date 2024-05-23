/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:26:56 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/23 09:09:54 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

template<typename T>
void iter(T* array, size_t length, void (*func)(T&)) 
{
    if (!array)
        throw std::invalid_argument("Array pointer is null");

    for (size_t i = 0; i < length; ++i)
        func(array[i]);
    
}

template <typename T>
void ftPrint(T& x) 
{
    std::cout << x << " ";
}

template <typename T>
void increment(T& x) 
{
    ++x;
}

#endif
