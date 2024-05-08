/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:40:26 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/07 14:40:17 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string const  &name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : name(src.name), grade(src.grade) {}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src)
{
    this->grade = src.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::increment()
{
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrement()
{
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

void Bureaucrat::signForm(AForm& form)
{
    if (this->grade > form.getGradeToSign())
        std::cout << this->getName() << " cannot sign " << form.getName() << " because his grade is too low" << std::endl;
    else
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    }
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &other)
{
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return (os);
}

void Bureaucrat::executeForm(AForm const & form)
{
    if (this->grade > form.getGradeToExec())
        std::cout << this->getName() << " cannot execute " << form.getName() << " because his grade is too low" << std::endl;
    else
    {
        form.execute(*this);
        std::cout << this->getName() << " executes " << form.getName() << std::endl;
    }
}