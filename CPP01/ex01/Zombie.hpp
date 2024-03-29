/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 03:09:30 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/03/30 03:10:38 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void) const;
	void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif