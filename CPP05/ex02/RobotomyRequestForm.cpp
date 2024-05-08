/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:18:26 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/08 10:28:44 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
    target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& form) : AForm(form) {
    *this = form;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& form) {
    target = form.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (!getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradeToExec())
        throw GradeTooLowException();
    std::cout << "Drilling noises" << std::endl;
    if (rand() % 2)
        std::cout << target << " has been robotomized" << std::endl;
    else
        std::cout << target << " robotomization failed" << std::endl;
}