/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:06:11 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 23:04:50 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default Constructor is Called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "Brain Copy Constructor Called" << std::endl;
}

Brain& Brain::operator=(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = copy.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(std::string idea)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
    
    std::cout << "Brain Constructor with idea is Called" << std::endl;
}

void Brain::displayIdeas()
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << "Idea " << i << " : " << this->ideas[i] << std::endl;
    }
}