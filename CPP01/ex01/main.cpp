/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 03:09:23 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/03/30 03:12:05 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	numOfZombies = 10;
	std::string	zombieName = "42 Zombie";

	Zombie	*zombies = zombieHorde(numOfZombies, zombieName);


	for (int i = 0; i < numOfZombies; i++)
		zombies[i].announce();

	delete[] zombies;

	return (0);
}