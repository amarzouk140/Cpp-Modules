/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:12:58 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/23 09:02:39 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <cstddef>

template <typename T>
class Array
{
    private:
        T* _array;
        unsigned int _size;
    public:
    Array() : _array(NULL), _size(0) {}
    Array(unsigned int n) : _size(n) 
        {
        if (n == 0) 
            _array = NULL;
        else 
            _array = new T[n]();
        }
    Array(const Array& other) : _size(other._size) 
        {
        std::cout << "Copy constructor called" << std::endl;
        if (_size == 0)
            _array = NULL;
        else 
        {
            _array = new T[_size]();
            for (unsigned int i = 0; i < _size; ++i)
                _array[i] = other._array[i];
        }
        }
    T& operator[](unsigned int index) 
    {
        if (index >= _size)
            throw std::out_of_range("Index out of bounds");
        return _array[index];
    }
    Array& operator=(const Array& other) 
        {
        if (this != &other) 
        {
            delete[] _array;

            _size = other._size;
            if (_size == 0)
                _array = NULL;
            else 
            {
                _array = new T[_size]();
                for (unsigned int i = 0; i < _size; ++i)
                    _array[i] = other._array[i];
            }
        }
            return *this;
        }
    ~Array() 
        {
        delete[] _array;
        }        
    const T& operator[](unsigned int index) const 
        {
        if (index >= _size)
            throw std::out_of_range("Index out of bounds");
        return _array[index];
        }
    
    unsigned int size() const 
    {
        return _size;
    }
};

#endif