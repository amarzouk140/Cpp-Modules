/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:19:55 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 23:25:07 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->healthPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap constractor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap&copy)
{
    *this = copy;
    std::cout << "FragTrap copy constractor is called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    this->name = copy.name;
    this->healthPoints = copy.healthPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;

    std::cout << "FragTrap assigment operator is called" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destractor is called" << std::endl;
  
}

FragTrap::FragTrap(const std::string &name, unsigned int healthPoints, unsigned int energyPoints, unsigned int attackDamage)
:ClapTrap(name,healthPoints,energyPoints, attackDamage)
{
    std::cout << "FragTrap " << name << " is created" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " is asking for high fives" << std::endl;
}