/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:43:01 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 23:44:55 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
    std::string name;
    
    public:
    DiamondTrap();
    DiamondTrap(const DiamondTrap& copy);
    DiamondTrap &operator=(const DiamondTrap& copy);
    ~DiamondTrap();
    
    DiamondTrap(std::string name);
    
    void whoAmI();

    void attack(std::string const & target);
    void currentStatus() const;
    
    
};
#endif