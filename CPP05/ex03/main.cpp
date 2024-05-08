/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:40:45 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/08 10:36:17 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
		try
	{
		Bureaucrat	bureaucrat("batman", 42);
		std::cout << bureaucrat;
		
		// #=========== ShrubberyCreationForm =======#
		ShrubberyCreationForm	shrubbery("Home");
		std::cout << shrubbery;

		bureaucrat.signForm(shrubbery);
		bureaucrat.executeForm(shrubbery);

		// #=========== RobotomyRequestForm =======#
		RobotomyRequestForm	robotomy("Robot");
		std::cout << robotomy;

		bureaucrat.signForm(robotomy);
		bureaucrat.executeForm(robotomy);


		// #=========== PresidentialPardonForm =======#
		PresidentialPardonForm	presidential("President");
		std::cout << presidential;

		bureaucrat.signForm(presidential);
		bureaucrat.executeForm(presidential);
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}	
}