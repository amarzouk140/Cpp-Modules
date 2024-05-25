/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:08:26 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/26 01:21:36 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iterator>
#include <list>
#include <iostream>
#include <algorithm>


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> 
{
public:

    MutantStack() : std::stack<T, Container>() {}
    MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}
    virtual ~MutantStack() {}
    MutantStack &operator=(const MutantStack &other) 
    {
        if (this != &other)
            std::stack<T, Container>::operator=(other);
        return *this;
    }

    // Typedefs for iterator types
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;
    typedef typename Container::reverse_iterator reverse_iterator;
    typedef typename Container::const_reverse_iterator const_reverse_iterator;
    
    // Iterator functions
    iterator begin() 
    {
        return this->c.begin();
    }
    

    iterator end() 
    {
        return this->c.end();
    }

    const_iterator begin() const 
    {
        return this->c.begin();
    }

    const_iterator end() const 
    {
        return this->c.end();
    }

    reverse_iterator rbegin() 
    {
        return this->c.rbegin();
    }

    reverse_iterator rend() 
    {
        return this->c.rend();
    }

    const_reverse_iterator rbegin() const 
    {
        return this->c.rbegin();
    }

    const_reverse_iterator rend() const 
    {
        return this->c.rend();
    }
};

#endif
