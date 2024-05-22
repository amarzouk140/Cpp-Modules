/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:58:34 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/22 13:35:25 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    FixedPoint = 0;
    std::cout << "Default Contractor is here!!" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
    std::cout << "Copy Constracotr is here!!" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "copy assigment operator is here!!!" << std::endl;
    this->FixedPoint = copy.FixedPoint;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destrcutor is here!!!" << std::endl;
}

Fixed::Fixed(const int intger)
{
	std::cout << "Int constructor called" << std::endl;
	FixedPoint = (intger * (1 << FractionalBits)); // Shift all bits to the left by 8 places.
}

Fixed::Fixed(const float FloatingPoint)
{
	std::cout << "Float constructor called" << std::endl;
	FixedPoint = (FloatingPoint * (1 << FractionalBits));
}

float	Fixed::toFloat(void) const
{
	float	floatValue;

	floatValue = FixedPoint * 1.0 / (1 << FractionalBits);
	return (floatValue);
}

int		Fixed::toInt(void) const
{
	return (roundf(FixedPoint * 1.0 / (1 << FractionalBits)));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}