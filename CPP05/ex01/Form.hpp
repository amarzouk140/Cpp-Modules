/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:46:09 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/06 14:31:54 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>
#include <string>
#include <stdexcept>

class Bureaucrat;

class Form 
{
    private:
    
        std::string const name;
        bool _signed;
        int const gradeToSign;
        int const gradeToExec;
    
    public:
        
        Form();
        Form(std::string name, int grade_to_sign, int grade_to_exec);
        Form(Form const& form);
        Form& operator=(Form const& form);
        ~Form();
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        void beSigned(Bureaucrat& b);
        
        class GradeTooHighException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream& out, Form const& form);

#endif