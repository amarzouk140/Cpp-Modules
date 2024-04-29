/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:32:10 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 15:03:58 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default")
{
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }
}
Character::Character(const std::string & name) : name(name)
{
    for (int i = 0; i < 4; i++) 
        this->inventory[i] = NULL;
}

Character::Character(const Character& src)
{
    this->name = src.name;
    
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    
    for (int i = 0; i < 4; i++)
        if (src.inventory[i])
            inventory[i] = src.inventory[i]->clone();
}

Character& Character::operator=(const Character  &other)
{
	if (this == &other)
		return (*this);
	name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
		{
			inventory[i] = other.inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->inventory[i])
            delete this->inventory[i];
}

void    Character::equip( AMateria* m ) 
{
    for (int i = 0; i < 4; i++)
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return;
        }
}

void    Character::unequip( int idx ) 
{
    if (idx < 0 || idx > 3)
        return;
    if (this->inventory[idx])
    {
        delete this->inventory[idx];
        this->inventory[idx] = NULL;
    }

}

void    Character::use( int idx, ICharacter& target) 
{
    if (idx < 0 || idx > 3)
        return;
    
    if (this->inventory[idx])
        this->inventory[idx]->use(target);
}

std::string const& Character::getName() const 
{
    return this->name;
}