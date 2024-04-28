/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:58:38 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 15:12:56 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
    std::string type;
    
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal& operator=(const WrongAnimal &copy);
    virtual ~WrongAnimal();

    void makeSound() const;
    std::string getType() const;
};

#endif