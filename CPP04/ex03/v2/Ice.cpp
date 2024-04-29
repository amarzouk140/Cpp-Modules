/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:33:00 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 15:15:14 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";

}

Ice::Ice(const std::string &type) : AMateria(type) { }

Ice::Ice(const Ice &other) : AMateria(other) { }

Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
    return (new Ice(type));
}

void    Ice::use( ICharacter& target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

