/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:18:21 by amarzouk          #+#    #+#             */
/*   Updated: 2024/05/07 14:34:26 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
    target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& form) : AForm(form) {
    *this = form;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& form) {
    target = form.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
    AForm::execute(executor);
    std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
