/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:39:57 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/09 08:26:04 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & src) 
{
    *this = src;
}

Intern & Intern::operator=(Intern const & src) {
    (void)src;
    return *this;
}

Intern::~Intern() {}

const char* Intern::FormNotFound::what() const throw() 
{
    return "Form not found";
}

AForm	*Intern::createShrubberyForm(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::createRobotomyRequestForm(std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::createPresidentialPardonForm(std::string &target)
{
	return (new PresidentialPardonForm(target));
}


int	getFormIndex(std::string &name)
{
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int	i;
	for (i = 0; i < 3; i++)
	{
		if (forms[i] == name)
			break;
	}
	return (i);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm	*(Intern::*functions[3])(std::string &_target) = {&Intern::createShrubberyForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};
	int	formIndex = getFormIndex(name);

	if (formIndex < 3)
	{
		std::cout << "Intern creates " << name << " form" << std::endl;
		return ((this->*functions[formIndex])(target));
	}
	else
	 	throw (FormNotFound());
}