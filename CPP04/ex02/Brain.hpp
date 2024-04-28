/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:06:09 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 23:03:28 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
    std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& copy);
        Brain &operator=(const Brain &copy);
        ~Brain();

        Brain(std::string idea);
        void displayIdeas();
        
    
};

#endif