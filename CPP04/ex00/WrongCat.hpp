/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:59:16 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 14:54:13 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat& operator=(const WrongCat &copy);
    ~WrongCat();

    void makeSound() const;
};

#endif