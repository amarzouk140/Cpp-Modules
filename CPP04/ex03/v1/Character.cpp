/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:19:53 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 13:23:56 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name(""), queue()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}


Character::Character(const std::string &name) : name(name), queue()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;

}

Character::Character(const Character &other)
{
	name = other.name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
		{
			inventory[i] = other.inventory[i]->clone();
		}
	}
}

Character	&Character::operator=(const Character &other)
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
	{
		if (inventory[i])
		{
			delete  inventory[i];
		}
	}
	while (!queue.isEmpty())
	{
		AMateria	*val = (AMateria *)queue.dequeue();
		delete val;
	}
}

const std::string	&Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m->clone();
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (inventory[idx])
	{
		queue.enqueue(inventory[idx]);
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (inventory[idx])
		inventory[idx]->use(target);
}