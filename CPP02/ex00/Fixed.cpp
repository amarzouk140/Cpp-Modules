/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:58:34 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/19 17:36:43 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->FixedPoint = 0;
    std::cout << "Default Contractor is here!!" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    FixedPoint = copy.getRawBits();
    std::cout << "Copy Constracotr is here!!" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "copy assigment operator is here!!!" << std::endl;
    this->FixedPoint = copy.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destrcutor is here!!!" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits method is here!!" << std::endl;
    return (FixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    FixedPoint = raw;
}