/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:54:09 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/04 23:30:35 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
	std::cout << "Intern constructor" << std::endl;
}

Intern::Intern(Intern & src) {
	std::cout << "Intern copy constructor" << std::endl;
	*this = src;
}

Intern::~Intern() {
	std::cout << "Intern destructor" << std::endl;
}

Intern	& Intern::operator=(Intern const & rhs) {
	std::cout << "Intern =" << std::endl;
	(void)rhs;
	return (*this);
}

Form	* Intern::makeForm(std::string const & formNameCreated, std::string const & target) {
	std::string	formName[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form	* formClass[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
	Form	* createdForm = NULL;

	for (int i = 0; i < 3; i++) {
		if (formNameCreated.compare(formName[i]))
			delete formClass[i];
		else
			createdForm = formClass[i];
	}
	if (createdForm == NULL)
		throw Intern::CreateFormFailException();
	std::cout << "Intern creates " << createdForm->getName() << std::endl;
	return (createdForm);
}
