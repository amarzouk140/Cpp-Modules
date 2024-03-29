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

void PhoneBook::addContact() {
    if (currentSize < 8) {
        // Attempt to set details for a new contact at the currentSize position
        if (contacts[currentSize].setDetails()) {
            // If details are successfully set, then and only then increment currentSize
            currentSize++;
        } else {
            // If setDetails returned false, decrement currentSize as we previously incremented it
            // This corrects for the case where setDetails fails after currentSize was incremented
            std::cout << "Contact information is incomplete. The contact was not added.\n";
        }
    } else {
        // If the phonebook is full, attempt to overwrite the contact at nextIndex
        if (!contacts[nextIndex].setDetails()) {
            // If setDetails returns false, inform the user, but do not decrement nextIndex
            // because we are overwriting an existing contact, not adding a new one
            std::cout << "Contact information is incomplete. The contact was not updated.\n";
        }
    }
    // Update nextIndex only if a new contact is successfully added or an existing one is updated
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