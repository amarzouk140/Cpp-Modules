/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:32:24 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 22:58:33 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    brain = new Brain();
    std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog " << copy.type << " is created by copy constructor" << std::endl;
    brain = new Brain();
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy) 
{
    *brain = *copy.brain;
    this->type = copy.type;
    return *this;
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wouf Wouf" << std::endl;
}
