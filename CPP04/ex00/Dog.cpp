/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:32:24 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 22:59:06 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog " << copy.type << " is created by copy constructor" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy) 
{
    this->type = copy.type;
    return *this;
}

Dog::~Dog() 
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wouf Wouf" << std::endl;
}
