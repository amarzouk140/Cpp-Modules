/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:20:05 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 23:47:22 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
    FragTrap();
    FragTrap(const FragTrap& copy);
    FragTrap &operator=(const FragTrap& copy);
    ~FragTrap();
    
    FragTrap(const std::string &name, unsigned int healthPoints = 100, unsigned int energyPoints = 100, unsigned int attackDamage = 30);
    void highFivesGuys(void);

};
#endif