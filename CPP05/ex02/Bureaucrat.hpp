/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:40:30 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/06 14:47:04 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
    
    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat& operator=(Bureaucrat const & src);
        ~Bureaucrat();
        Bureaucrat(std::string const &name, int grade);
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(Form& form);
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &other);


#endif