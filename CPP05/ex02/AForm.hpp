/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:46:09 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/07 14:26:40 by amarzouk         ###   ########.fr       */
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

class AForm 
{
    private:
    
        std::string const name;
        bool _signed;
        int const gradeToSign;
        int const gradeToExec;
    
    public:
        
        AForm();
        AForm(std::string name, int grade_to_sign, int grade_to_exec);
        AForm(AForm const& form);
        AForm& operator=(AForm const& form);
        virtual ~AForm();
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        void beSigned(Bureaucrat& b);
        virtual void execute(Bureaucrat const& executor) const = 0;
        
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

std::ostream& operator<<(std::ostream& out, AForm const& form);

#endif