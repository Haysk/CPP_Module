/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:58:17 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/04 22:31:34 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target_): Form("RobotomyRequest", 72,45), target(target_) {
	std::cout << "RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src):
	Form(src),
	target(src.getTarget()) {
	std::cout << "RobotomyRequestForm copy constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm destructor" << std::endl;
}

RobotomyRequestForm	& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	std::cout << "RobotomyRequestForm =" << std::endl;
	this->target = rhs.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const {
	return (this->target);
}

void	RobotomyRequestForm::exec(Bureaucrat const & bc) const {
	this->canExecute(bc);
	std::cout << "PZZPZPZPZZZ !!!!!!!!!! " << this->target << " has been robotomyzed ";
	if (std::rand() % 2)
		std::cout << "by succes" << std::endl;
	else
		std::cout << "but it didn't work." << std::endl;

}
