/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:38:23 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/23 09:18:14 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
    std::string name;
    unsigned int healthPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
    
    public:
    ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap &copy);
    ~ClapTrap();
    
    ClapTrap(const std::string &name, unsigned int healthPoints = 10, unsigned int energyPoints = 10, unsigned int attackDamage = 0);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void currentStatus() const;

};


#endif