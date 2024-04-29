/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:11:54 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 12:19:28 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &type) : type(type) { }

AMateria::AMateria(const AMateria &other) 
{
    type = other.type;
}

AMateria	&AMateria::operator=(const AMateria &other) 
{
    if (this != &other)
        type = other.type;
    return *this;
}

AMateria::~AMateria() {}

const std::string	&AMateria::getType() const 
{
    return type;
}

void	AMateria::use(ICharacter &target) 
{
    (void)target;
}