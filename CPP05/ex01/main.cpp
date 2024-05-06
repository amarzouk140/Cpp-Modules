/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:40:45 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/06 14:57:18 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	bureaucrat("batman", 44);
		std::cout << bureaucrat;
		bureaucrat.increment();
		std::cout << bureaucrat;

		Form Form("form", 42, 42);
		std::cout << Form;

		bureaucrat.signForm(Form);
		
		bureaucrat.increment();
		std::cout << bureaucrat;

		bureaucrat.signForm(Form);
		std::cout << Form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}