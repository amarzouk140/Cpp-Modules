/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:58:41 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/19 18:07:04 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

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
    int getRawBits( void ) const;
    void setRawBits( int const raw );

};

#endif