/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:26:58 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/22 12:05:26 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    try 
    {
        int intArray[] = {1, 2, 3, 4, 5};
        std::string strArray[] = {"hello", "world", "!"};

        std::cout << "Original intArray: ";
        iter(intArray, 5, print);
        std::cout << std::endl;

        iter(intArray, 5, increment);
        std::cout << "Incremented intArray: ";
        iter(intArray, 5, print);
        std::cout << std::endl;

        std::cout << "Original strArray: ";
        iter(strArray, 3, print);
        std::cout << std::endl;

        std::cout << "limited strArray: ";
        iter(strArray, 1, print);
        std::cout << std::endl;

    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}