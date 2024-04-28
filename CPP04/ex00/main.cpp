/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:31:45 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/04/28 15:14:10 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main() 
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();


    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;

    j->makeSound(); // Output: Wouf Wouf
    i->makeSound(); // Output: Meow!
	meta->makeSound(); // Output: Animal Sound

	delete i;
	delete j;
	delete meta;
	
	const WrongAnimal	*meta2 = new WrongAnimal();
	const WrongAnimal	*i2 = new WrongCat();

	meta2->makeSound(); // Output: WrongAnimal Sound
	i2->makeSound(); // Output: WrongAnimal Sound

	delete i2;
	delete meta2;

}