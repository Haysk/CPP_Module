/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:58:33 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/04 22:50:19 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target_): Form("PresidentialPardon", 25, 5), target(target_) {
	std::cout << "PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src):
	Form(src),
	target(src.getTarget()) {
	std::cout << "PresidentialPardonForm copy constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardonForm destructor" << std::endl;
}

PresidentialPardonForm	& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	std::cout << "PresidentialPardonForm =" << std::endl;
	this->target = rhs.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const {
	return (this->target);
}

void	PresidentialPardonForm::exec(Bureaucrat const & bc) const {
	this->canExecute(bc);
	std::cout << "President Zaphod Beeblebrox forgive " << this->target <<std::endl;
}

