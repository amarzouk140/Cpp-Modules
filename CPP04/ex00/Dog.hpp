/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:32:27 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 14:53:59 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
    public:
    Dog();
    Dog(const Dog &copy);
    Dog& operator=(const Dog &copy);
    ~Dog();

    void makeSound() const;
};

#endif