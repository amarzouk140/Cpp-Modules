/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:29:41 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 22:41:10 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int j = 10;
    
    Animal* A1[j]; // Declare an array of pointers to Animal objects
    
    for (int i = 0; i < (j / 2); i++)
        A1[i] = new Dog(); // Allocate memory for Dog objects
    
    for (int i = (j / 2); i < j; i++)
        A1[i] = new Cat(); // Allocate memory for Cat objects

    for (int i = 0; i < j; i++)
        delete A1[i]; // Deallocate memory for all objects

    
}