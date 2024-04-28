/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:30:13 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 22:59:22 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    brain = new Brain();
    std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    brain = new Brain();
    *this = copy;
    std::cout << "Cat " << copy.type << " is created by copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &copy) 
{
    *brain = *copy.brain;
    this->type = copy.type;
    return *this;
}

Cat::~Cat() 
{
    delete brain;
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}
