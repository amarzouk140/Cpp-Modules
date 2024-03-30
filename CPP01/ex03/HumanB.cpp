/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:40:57 by amarzouk          #+#    #+#             */
/*   Updated: 2024/03/30 14:52:09 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string _name) :name(_name), weapon(NULL) {}

void	HumanB::setWeapon(Weapon& _weapon)
{
	weapon = &_weapon;
}

void	HumanB::attack()
{
	if (weapon == NULL)
		std::cout << name << " attacks with their bare hands" << std::endl;
	else
		std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
}

