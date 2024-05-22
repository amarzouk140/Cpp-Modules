/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:13:00 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/22 14:37:11 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() 
{
    try 
    {
        /* Test with int data type */
    
        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.size(); ++i)
            intArray[i] = i * 2;

        std::cout << "intArray: ";
        for (unsigned int i = 0; i < intArray.size(); ++i)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        /* Test with std::string data type */
    
        Array<std::string> strArray(3);
        strArray[0] = "hello";
        strArray[1] = "world";
        strArray[2] = "!";

        std::cout << "strArray: ";
        for (unsigned int i = 0; i < strArray.size(); ++i)
            std::cout << strArray[i] << " ";
        std::cout << std::endl;

        /* Test copy constructor and assignment operator */
        
        Array<int> copiedArray = intArray;
        std::cout << "copiedArray: ";
        for (unsigned int i = 0; i < copiedArray.size(); ++i)
            std::cout << copiedArray[i] << " ";
        std::cout << std::endl;

        Array<std::string> assignedArray;
        assignedArray = strArray;
        std::cout << "assignedArray: ";
        for (unsigned int i = 0; i < assignedArray.size(); ++i)
            std::cout << assignedArray[i] << " ";
        std::cout << std::endl;

        /* Test out of bounds exception */
        
        try
        {
            std::cout << intArray[10] << std::endl;
        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}