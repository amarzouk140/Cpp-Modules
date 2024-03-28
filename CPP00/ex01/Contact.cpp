/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 01:11:11 by ayman_marzo       #+#    #+#             */
/*   Updated: 2024/03/29 02:58:17 by ayman_marzo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {}

void Contact::setDetails() 
{
    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
    if (firstName.empty())
    {
        std::cout << "First name cannot be empty. Please try again.\n";
        return;
    }
    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    if (lastName.empty())
    {
        std::cout << "Last name cannot be empty. Please try again.\n";
        return;
    }
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    if (nickname.empty())
    {
        std::cout << "Nickname cannot be empty. Please try again.\n";
        return;
    }
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    if (phoneNumber.empty())
    {
        std::cout << "Phone number cannot be empty. Please try again.\n";
        return;
    }
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);
    if (darkestSecret.empty())
    {
        std::cout << "Darkest secret cannot be empty. Please try again.\n";
        return;
    }
}

void Contact::displayContactSummary(int index) const 
{
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|";
    std::cout << std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|";
    std::cout << std::setw(10) << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << std::endl;
}

void Contact::displayFullDetails() const 
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}