/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:27:47 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 14:55:58 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default") 
{
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &copy) 
{
    *this = copy;
    std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy) 
{
    this->type = copy.type;
    return *this;
}

Animal::~Animal() 
{
    std::cout << "Animal " << type << " Destructor Called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}