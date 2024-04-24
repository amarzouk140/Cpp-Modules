/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:38:23 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 23:46:51 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
    std::string name;
    unsigned int healthPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
    
    public:
    ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap &copy);
    ~ClapTrap();
    
    ClapTrap(const std::string &name, unsigned int healthPoints = 100, unsigned int energyPoints = 50, unsigned int attackDamage = 30);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void currentStatus() const;

};


#endif