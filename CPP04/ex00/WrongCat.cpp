/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:59:14 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 15:11:47 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) 
{
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy) 
{
    this->type = copy.type;
    return *this;
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Sound: Meow " << std::endl;
}

