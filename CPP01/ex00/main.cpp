/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:06:06 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/03/29 20:07:44 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*heapZombie;

	heapZombie = newZombie("Heap Zombie");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Stack Zombie");
}