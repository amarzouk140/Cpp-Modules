/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:13:03 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 23:27:05 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(const ScavTrap& copy);
    ScavTrap &operator=(const ScavTrap &copy);
    ~ScavTrap();

    ScavTrap(const std::string &name, unsigned int healthPoints = 100, unsigned int energyPoints = 50, unsigned int attackDamage = 20);

    void attack(const std::string &target);
    void guardGate();
    
};

#endif