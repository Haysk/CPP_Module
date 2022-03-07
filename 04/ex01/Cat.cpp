/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:20:30 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:03:24 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat constructor" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat & cp): Animal(cp.getType()) {
	std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
	delete this->brain;
}

Brain	* Cat::getBrain() const {
	return (this->brain);
}

Cat	& Cat::operator=(Cat const & rhs) {
	Animal::operator=(rhs);
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

Animal	& Cat::operator=(Animal const & rhs) {
	Animal::operator=(rhs);
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}
