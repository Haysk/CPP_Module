/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 08:28:40 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 08:28:48 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string	name_, unsigned int grade_): name(name_) {
	if (grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade_;	
	std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat & src): name(src.getName()), grade(src.getGrade()) {
	std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat	& Bureaucrat::operator=(Bureaucrat const & rhs) {
	std::cout << "Bureaucrat =" << std::endl;
	this->grade = rhs.getGrade();
	return (*this);
}

std::string		Bureaucrat::getName(void) const {
	return (this->name);
}

unsigned int	Bureaucrat::getGrade(void) const{
	return (this->grade);
}

void			Bureaucrat::upGrade(unsigned int upGrade) {
		if (this->grade - upGrade < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade -= upGrade;
}

void			Bureaucrat::downGrade(unsigned int downGrade) {
		if (this->grade + downGrade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade += downGrade;
}

std::ostream	& operator<<(std::ostream & lhs, Bureaucrat & rhs) {
	lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return (lhs);
}

