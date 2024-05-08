/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:46:07 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/06 14:58:20 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), _signed(false), gradeToSign(150), gradeToExec(150) {}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec) : name(name), _signed(false), gradeToSign(grade_to_sign), gradeToExec(grade_to_exec)
{
    if (grade_to_sign < 1 || grade_to_exec < 1)
        throw AForm::GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_exec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const& AForm) : name(AForm.name), _signed(AForm._signed), gradeToSign(AForm.gradeToSign), gradeToExec(AForm.gradeToExec) {}

AForm& AForm::operator=(AForm const& AForm)
{
    this->_signed = AForm._signed;
    return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const
{
    return this->name;
}

bool AForm::getSigned() const
{
    return this->_signed;
}

int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}

int AForm::getGradeToExec() const
{
    return this->gradeToExec;
}

void AForm::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    this->_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream& operator<<(std::ostream& out, AForm const& AForm)
{
    out << "AForm " << AForm.getName() << " is ";
    if (AForm.getSigned())
        out << "signed";
    else
    {
        out << "not signed ";
        out << " and requires grade " << AForm.getGradeToSign() << " to sign and grade " << AForm.getGradeToExec() << " to execute " << std::endl;
    }
    return out;
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "Form is not signed";
}

const char* AForm::FormAlreadySignedException::what() const throw()
{
    return "Form is already signed";
}

const char* AForm::FormFailedException::what() const throw()
{
    return "Form failed";
}