/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:20:05 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 16:32:09 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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