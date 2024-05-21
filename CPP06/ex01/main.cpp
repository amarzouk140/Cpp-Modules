/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:09:21 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/21 09:44:15 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main() 
{
    Data originalData = {42, "Hello, world!"};
    Data* originalPtr = &originalData;

    std::cout << "Original Data Pointer: " << originalPtr << std::endl;
    std::cout << "Original Data Value: " << originalPtr->value << std::endl;
    std::cout << "Original Data Text: " << originalPtr->text << std::endl;

    uintptr_t serialized = Serializer::serialize(originalPtr);
    std::cout << "Serialized: " << serialized << std::endl;

    Data* deserializedPtr = Serializer::deserialize(serialized);
    std::cout << "Deserialized Data Pointer: " << deserializedPtr << std::endl;
    std::cout << "Deserialized Data Value: " << deserializedPtr->value << std::endl;
    std::cout << "Deserialized Data Text: " << deserializedPtr->text << std::endl;

    if (originalPtr == deserializedPtr) 
        std::cout << "Serialization and deserialization successful." << std::endl;
    else 
        std::cout << "Serialization and deserialization failed." << std::endl;

    return 0;
}