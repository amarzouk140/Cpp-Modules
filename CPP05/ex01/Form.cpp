/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:46:07 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/06 14:58:20 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), _signed(false), gradeToSign(150), gradeToExec(150) {}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) : name(name), _signed(false), gradeToSign(grade_to_sign), gradeToExec(grade_to_exec)
{
    if (grade_to_sign < 1 || grade_to_exec < 1)
        throw Form::GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_exec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const& form) : name(form.name), _signed(form._signed), gradeToSign(form.gradeToSign), gradeToExec(form.gradeToExec) {}

Form& Form::operator=(Form const& form)
{
    this->_signed = form._signed;
    return *this;
}

Form::~Form() {}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getSigned() const
{
    return this->_signed;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}

int Form::getGradeToExec() const
{
    return this->gradeToExec;
}

void Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream& operator<<(std::ostream& out, Form const& form)
{
    out << "Form " << form.getName() << " is ";
    if (form.getSigned())
        out << "signed";
    else
    {
        out << "not signed ";
        out << " and requires grade " << form.getGradeToSign() << " to sign and grade " << form.getGradeToExec() << " to execute ";
    }
    return out;
}

