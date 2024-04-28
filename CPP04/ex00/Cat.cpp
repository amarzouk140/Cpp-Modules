/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:30:13 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 11:17:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    *this = copy;
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy) 
{
    this->type = copy.type;
    return *this;
}

Cat::~Cat() 
{
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}
