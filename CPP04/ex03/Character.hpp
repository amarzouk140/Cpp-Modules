/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:19:50 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 13:21:14 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>
#include "Queue.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria	*inventory[4];
	Queue		queue;

public:
	Character();
	Character(const std::string &name);
	Character(const Character &other);
	Character	&operator=(const Character &other);
	~Character();

	const std::string	&getName() const;

	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);

};


#endif