/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:42:59 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/24 17:07:42 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap:: DiamondTrap()
{
    name = "";
    std::cout << "Diamond constractor is called " << std::endl;
}

DiamondTrap:: DiamondTrap(const DiamondTrap& copy)
{
    // later
}

DiamondTrap:: ~DiamondTrap()
{
    std::cout << "Diamond destractor is called " << std::endl;
}