/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:38:26 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/22 17:44:32 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "";
    healthPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    
    std::cout << "default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    this->name = copy.name;
    this->healthPoints = copy.healthPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;

    std::cout << "copy constructor is called" << std::endl;

}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor is called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy)
{   
    // later

    std::cout << "assigment operator is called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << name << " attacks " << target; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energyPoints > 0 && healthPoints > 0 && amount <= energyPoints && attackDamage < 8)
    {
        attackDamage += amount;
        healthPoints -= amount;
        energyPoints -= amount;
    }
    else if (energyPoints <= 0)
    std::cout << "no enough energy points to excute such attack!!!" << std::endl;
    else 
    std::cout << "no enough health points to excute such attack!!!" << std::endl;
}

void ClapTrap::beRepaired (unsigned int amount)
{
    if (energyPoints > 0 && amount <= energyPoints)
    {
        healthPoints += amount;
        energyPoints -= amount;
        
        std::cout << "ClapTrap repairs it self with " << amount << " health points!!" << std::endl;
    }
    else
    
    std::cout << "no enough energy points to excute such repair!!!" << std::endl;
}

void ClapTrap::clapTrapAttacks(const std::string &target, unsigned int amount)
{
    attack(target);
    takeDamage(amount);
    
    if (energyPoints > 0 && healthPoints > 0 && amount <= energyPoints && attackDamage < 8)
    std::cout << " causing " << attackDamage << " points of damage!" << std::endl;

}

void ClapTrap::setName(std::string set_name)
{
    name = set_name;
}