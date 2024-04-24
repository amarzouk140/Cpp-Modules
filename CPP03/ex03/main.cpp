/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:38:21 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 23:45:51 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap trap("batman");
    trap.whoAmI();
    trap.currentStatus();
    trap.attack("ayman");
    trap.guardGate();
    trap.highFivesGuys();
    trap.currentStatus();
    trap.takeDamage(50);
    trap.currentStatus();
}