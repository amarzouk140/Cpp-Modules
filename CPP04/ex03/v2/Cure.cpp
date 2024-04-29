/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:32:26 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 15:11:57 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::Cure(const Cure &other) : AMateria(other) { }

Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

Cure::~Cure() {}

Cure::Cure(const std::string &type) : AMateria(type) { }

AMateria* Cure::clone() const
{
    return (new Cure(type));
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


