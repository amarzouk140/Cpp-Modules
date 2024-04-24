/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:42:59 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 23:47:54 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap:: DiamondTrap()
{
    name = "";
    this->healthPoints = FragTrap::healthPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "Diamond constractor is called " << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), name(copy.name)
{
	std::cout << "DiamondTrap " << name << " is created" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copy)
{
	ClapTrap::operator=(copy);
	this->name = copy.name;
	this->healthPoints = copy.healthPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

DiamondTrap:: ~DiamondTrap()
{
    std::cout << "Diamond destractor is called " << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"), FragTrap(_name) , ScavTrap(_name), name(_name)
{
	 this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " is created" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << name << " and ClapTrap name is " << ClapTrap::name << std::endl;
}

void	DiamondTrap::currentStatus() const
{
	std::cout	<< "DiamondTrap name is " << name << ", hit points is " << this->healthPoints << ", energy points is "
				<< energyPoints << ", attack damage is " << this->attackDamage << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	
	ScavTrap::attack(target);
}