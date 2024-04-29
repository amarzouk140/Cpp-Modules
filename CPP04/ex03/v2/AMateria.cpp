/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:29:30 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 14:44:35 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("default") {}

AMateria::AMateria (std::string const & type)  : type(type) {}

AMateria::AMateria( AMateria const & src)
{
    type = src.type;
}

AMateria	&AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

AMateria::~AMateria( void ) {}

std::string const & AMateria::getType() const
{
    return this->type;
}

void    AMateria::use( ICharacter& target)
{
    (void)target;
}

