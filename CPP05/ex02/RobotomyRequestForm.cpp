/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:18:26 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/07 14:32:58 by amarzouk         ###   ########.fr       */
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

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    AForm::execute(executor);
    std::cout << "*drilling noises* ";
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " failed to be robotomized" << std::endl;
}
