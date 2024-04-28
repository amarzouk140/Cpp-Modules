/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:24:31 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 14:53:08 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
    protected:
    std::string type;
    
    public:
    Animal();
    Animal(const Animal &copy);
    Animal& operator=(const Animal &copy);
    virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
};
#endif