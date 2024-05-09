/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:39:55 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/09 08:25:26 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        Intern & operator=(Intern const & src);
        ~Intern();
    
        AForm* makeForm(std::string name, std::string target);
	    AForm	*createShrubberyForm(std::string &target);
	    AForm	*createRobotomyRequestForm(std::string &target);
	    AForm	*createPresidentialPardonForm(std::string &target);
    
    class FormNotFound : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

};

#endif