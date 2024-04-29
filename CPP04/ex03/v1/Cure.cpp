/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:21:34 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 13:22:07 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
	type = "cure";
}

Cure::Cure(const std::string &type) : AMateria(type) { }

Cure::Cure(const Cure &other) : AMateria(other) { }

Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

Cure::~Cure() { }

AMateria	*Cure::clone() const
{
	return (new Cure(type));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}