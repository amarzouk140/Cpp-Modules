/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:41:04 by amarzouk          #+#    #+#             */
/*   Updated: 2024/03/30 14:45:45 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("") {}

Weapon::Weapon(std::string _type) : type(_type) {}

void	Weapon::setType(std::string _type)
{
	type = _type;
}

const std::string&	Weapon::getType() const
{
	return (type);
}