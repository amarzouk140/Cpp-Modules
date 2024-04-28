/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:30:16 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 14:53:50 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
    public:
    Cat();
    Cat(const Cat &copy);
    Cat& operator=(const Cat &copy);
    ~Cat();

    void makeSound() const;
};

#endif