/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:26:54 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/05/25 21:30:45 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(20);
    v.push_back(30);
    v.push_back(35);
    v.push_back(25);
    v.pop_back(); // remove 25

    try
    {
        std::cout << easyfind(v, 20) << std::endl;
        std::cout << easyfind(v, 25) << std::endl;
        std::cout << easyfind(v, 42) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}