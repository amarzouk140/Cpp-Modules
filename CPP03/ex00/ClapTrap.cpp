/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:38:26 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/28 12:18:43 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(" "), healthPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "copy constructor is called" << std::endl;
    std::cout << "ClapTrap " << name << " is created" << std::endl;

}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy)
{   
        this->name = copy.name;
        this->healthPoints = copy.healthPoints;
        this->energyPoints = copy.energyPoints;
        this->attackDamage = copy.attackDamage;

    std::cout << "assigment operator is called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const std::string& name,unsigned int healthPoints, unsigned int energyPoints, unsigned int attackDamage) : name(name), healthPoints(healthPoints), energyPoints(energyPoints), attackDamage(attackDamage)
{
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
    if (energyPoints > 0 && attackDamage <= energyPoints)
    {
    std::cout << "ClapTrap " << name << " attacks " << target;
    std::cout << " causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
    }
    else if (energyPoints <= 0 || attackDamage > energyPoints)
    std::cout << "ClapTrap " << name << " doesn't have enough poinrs!" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->healthPoints > 0 && amount <= this->healthPoints)
    {
        this->healthPoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!\n";
    }
    else if (this->healthPoints <= 0)
    std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
    else 
    std::cout << "no enough points to damage this much!!!" << std::endl;
}

void ClapTrap::beRepaired (unsigned int amount)
{
    if (this->energyPoints > 0 && amount <= this->energyPoints)
    {
        this->healthPoints += amount;
        this->energyPoints -= amount;
        
        std::cout << "ClapTrap " << name << " repairs it self with " << amount << " health points!!" << std::endl;
    }
    else
    
    std::cout << "no enough energy points to excute such repair!!!" << std::endl;
}

void	ClapTrap::currentStatus() const
{
	std::cout << "ClapTrap " << name << " has " << healthPoints << " hit points, " << energyPoints << " energy points and " << attackDamage << " attack damage" << std::endl;
}