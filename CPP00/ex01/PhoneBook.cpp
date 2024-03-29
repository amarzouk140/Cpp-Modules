/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 01:13:20 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/03/29 03:13:44 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <sstream>

PhoneBook::PhoneBook() : currentSize(0), nextIndex(0) {}

void PhoneBook::addContact() 
{
    if (currentSize < 8)
        contacts[currentSize++].setDetails();
    else
        contacts[nextIndex].setDetails();
    nextIndex = (nextIndex + 1) % 8;
}

void PhoneBook::searchContacts() const {
    for (int i = 0; i < currentSize; i++) {
        contacts[i].displayContactSummary(i);
    }
    std::cout << "Enter index to view details: ";
    std::string input;
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "No index entered. Returning to main menu.\n";
        return;
    }

    // Using std::istringstream to convert string to integer
    std::istringstream iss(input);
    int index;
    if (!(iss >> index)) { // If conversion fails
        std::cout << "Invalid input. Please enter a numeric value.\n";
        return;
    }

    // Checking the entire string was consumed during conversion to ensure validity
    std::string remaining;
    if (iss >> remaining) { // Checks if there's any remaining part that wasn't converted
        std::cout << "Invalid index. Please enter a number between 0 and 7.\n";
        return;
    }

    if (index < 0 || index > 7) {
        std::cout << "Invalid index. Please enter a number between 0 and 7.\n";
        return;
    } else if (index >= currentSize) {
        std::cout << "Contact not found. Please enter a valid index.\n";
    } else {
        contacts[index].displayFullDetails();
    }
}