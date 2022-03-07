/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:43:19 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 03:20:02 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Empty Animal constructor" << std::endl;
}

Animal::Animal(std::string type_): type(type_) {
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(Animal & cp): type(cp.getType()) {
	std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const {
	std::cout << "BOUYACHAKALAKA !!!" << std::endl;
}

Animal	&Animal::operator=(Animal const & rhs) {
	std::cout << "Animal =" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::ostream & operator<<(std::ostream &ostream, Animal const & rhs) {
	ostream << rhs.getType();
	return (ostream);
}


