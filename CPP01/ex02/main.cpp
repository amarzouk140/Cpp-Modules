/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:39:37 by amarzouk          #+#    #+#             */
/*   Updated: 2024/03/30 14:39:40 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string	stringVar = "HI THIS IS BRAIN";

	std::string	*stringPTR = &stringVar;
	std::string& stringREF = stringVar;

	// Print the memory addresses
	std::cout << &stringVar << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl << std::endl;

	// Print the values
	std::cout << stringVar << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout <<  stringREF << std::endl;
}