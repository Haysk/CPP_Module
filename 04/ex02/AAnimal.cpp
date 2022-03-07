/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:43:19 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:12:35 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Empty AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(std::string type_): type(type_) {
	std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(AAnimal & cp): type(cp.getType()) {
	std::cout << "AAnimal copy constructor" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor" << std::endl;
}

std::string	AAnimal::getType() const {
	return (this->type);
}

AAnimal	&AAnimal::operator=(AAnimal const & rhs) {
	std::cout << "AAnimal =" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::ostream & operator<<(std::ostream &ostream, AAnimal const & rhs) {
	ostream << rhs.getType();
	return (ostream);
}

