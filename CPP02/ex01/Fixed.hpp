/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:48:42 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/19 18:23:06 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
    int FixedPoint;
    static const int FractionalBits = 8;

    public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &copy);
    ~Fixed();
    
    Fixed(const int intger);
    Fixed (const float FloatingPoint);
    
    float toFloat( void ) const;
    int toInt( void ) const;

};

std::ostream&	operator<<(std::ostream& os, const Fixed &fixed);

#endif