/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:31:26 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/21 22:42:14 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"


Point::Point() : x(0), y(0) { }

Point::Point(const float x, const float y) : x(x), y(y) { }

Point::Point(const Point &point) : x(point.x), y(point.y) { }

Point::~Point() { }

Point	&Point::operator=(const Point &point)
{
	if (this != &point)
		*this = point;
	return (*this);
}


float	Point::getX() const
{
	return (x.toFloat());
}

float	Point::getY() const
{
	return (y.toFloat());
}