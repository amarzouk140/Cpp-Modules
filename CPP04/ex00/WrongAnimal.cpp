/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:58:35 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 15:14:22 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "default";
    std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) 
{
    *this = copy;
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy) 
{
    this->type = copy.type;
    return *this;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal " << type << " Destructor Called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}
