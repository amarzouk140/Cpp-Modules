/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:08:26 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/25 23:17:53 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>
#include <climits>


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
        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        iterator begin() { return std::stack<T, Container>::c.begin(); }
        iterator end() { return std::stack<T, Container>::c.end(); }
};

#endif