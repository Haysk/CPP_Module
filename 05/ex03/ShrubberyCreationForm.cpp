/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:58:59 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/04 22:29:57 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_): Form("ShrubberyCreation", 145, 137), target(target_) {
	std::cout << "ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src):
	Form(src),
	target(src.getTarget()) {
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm	& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	std::cout << "ShrubberyCreationForm =" << std::endl;
	this->target = rhs.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const {
	return (this->target);
}

void	ShrubberyCreationForm::exec(Bureaucrat const & bc) const {
	std::ofstream	file;
	std::string		fileName = this->target + "_shrubbery";
	
	this->canExecute(bc);
	file.open(fileName.c_str());
	file << "              ,@@@@@@@," << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	file << "       |o|        | |         | |" << std::endl;
	file << "       |.|        | |         | |" << std::endl;
	file << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
}

