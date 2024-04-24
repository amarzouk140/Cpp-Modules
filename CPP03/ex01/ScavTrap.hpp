/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:13:03 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 15:21:54 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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