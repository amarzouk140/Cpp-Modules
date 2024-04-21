/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:58:34 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/21 22:34:51 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	FixedPoint = 0;
}

Fixed::Fixed( const int intNumber )
{
	FixedPoint = (intNumber * (1 << fractionalBits));
}

Fixed::Fixed( const float floatNumber )
{
	FixedPoint = roundf(floatNumber * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	FixedPoint = fixed.FixedPoint;
}

Fixed::~Fixed()
{}

int	Fixed::toInt() const
{
	return (static_cast<int>(FixedPoint * 1.0 / (1 << fractionalBits)));
}

float	Fixed::toFloat() const
{
	return (FixedPoint * 1.0 / (1 << fractionalBits));
}

int	Fixed::getFixedPointValue(void) const
{
	return (FixedPoint);
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	FixedPoint = fixed.FixedPoint;
	return (*this);
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (this->FixedPoint < fixed.FixedPoint);
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->FixedPoint > fixed.FixedPoint);
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (this->FixedPoint <= fixed.FixedPoint);
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (this->FixedPoint >= fixed.FixedPoint);
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (this->FixedPoint == fixed.FixedPoint);
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return (this->FixedPoint != fixed.FixedPoint);
}

Fixed	Fixed::operator+(const Fixed &fixed)
{
	Fixed	obj;

	obj.FixedPoint = this->FixedPoint + fixed.FixedPoint;
	return (obj);
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	Fixed	obj;

	obj.FixedPoint = this->FixedPoint - fixed.FixedPoint;
	return (obj);
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	Fixed	obj;

	obj.FixedPoint = this->FixedPoint * fixed.FixedPoint / (1 << fractionalBits);
	return (obj);
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	Fixed	obj;

	obj.FixedPoint = this->FixedPoint / fixed.FixedPoint * (1 << fractionalBits);
	return (obj);
}

Fixed	Fixed::operator++()
{
	Fixed	obj;

	obj.FixedPoint = ++this->FixedPoint;
	return (obj);
}

Fixed	Fixed::operator++(int)
{
	Fixed	obj;

	obj.FixedPoint = this->FixedPoint++;
	return (obj);
}

Fixed	Fixed::operator--()
{
	Fixed	obj;

	obj.FixedPoint = --this->FixedPoint;
	return (obj);
}

Fixed	Fixed::operator--(int)
{
	Fixed	obj;

	obj.FixedPoint = this->FixedPoint--;
	return (obj);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.getFixedPointValue() < fixed2.getFixedPointValue())
		return (fixed1);
	else
	 	return (fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.getFixedPointValue() > fixed2.getFixedPointValue())
		return (fixed1);
	else
	 	return (fixed2);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}