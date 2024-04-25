/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:13:06 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/25 15:50:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap:: ScavTrap()
{
    std::cout << "ScavTrap default constructor is called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
   	*this = copy;
    std::cout << "ScavTrap copy constructor is called" << std::endl;
}

ScavTrap &ScavTrap ::operator=(const ScavTrap &copy)
{
    this->name = copy.name;
	this->healthPoints = copy.healthPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

ScavTrap:: ~ScavTrap()
{
    std::cout << "ScavTrap default destructor is called " << std::endl;

}

ScavTrap::ScavTrap(const std::string& name,unsigned int healthPoints, unsigned int energyPoints, unsigned int attackDamage) 
: ClapTrap(name, healthPoints, energyPoints, attackDamage)
{
    std::cout << "ScavTrap " << this->name << " is created" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints > 0 && attackDamage <= energyPoints)
    {
    std::cout << "ScavTrap " << name << " attacks " << target;
    std::cout << " causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= attackDamage;
    }
    else if (energyPoints <= 0 || attackDamage > energyPoints)
    std::cout << "ScavTrap " << name << " doesn't have enough poinrs!" << std::endl;
    
}