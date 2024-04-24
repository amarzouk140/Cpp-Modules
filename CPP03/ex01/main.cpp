/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:38:21 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 15:49:38 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap1("ayman",50, 30, 10);
	clap1.currentStatus();
    
    clap1.attack("mahmoud");
	clap1.currentStatus();

    clap1.takeDamage(10);
    clap1.currentStatus();

    clap1.beRepaired(15);
    clap1.currentStatus();
    clap1.beRepaired(5);

    clap1.guardGate();
    clap1.takeDamage(60);
    clap1.attack("mahmoud");
    clap1.takeDamage(60);

    clap1.currentStatus();


    return 0;
}