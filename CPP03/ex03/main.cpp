/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:38:21 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 16:39:51 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap clap1("ayman",50, 30, 10);
	clap1.currentStatus();
    
    clap1.attack("mahmoud");
	clap1.currentStatus();

    clap1.takeDamage(10);
    clap1.currentStatus();

    clap1.beRepaired(15);
    clap1.currentStatus();
    clap1.beRepaired(5);

    clap1.highFivesGuys();
    clap1.takeDamage(60);
    clap1.attack("mahmoud");
    clap1.takeDamage(60);

    clap1.currentStatus();


    return 0;
}