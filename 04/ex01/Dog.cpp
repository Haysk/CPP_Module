/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:20:30 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:02:08 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Dog constructor" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog & cp): Animal(cp.getType()) {
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
	delete this->brain;
}

Brain	* Dog::getBrain() const {
	return (this->brain);
}

Dog	& Dog::operator=(Dog const & rhs) {
	Animal::operator=(rhs);
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

Animal	& Dog::operator=(Animal const & rhs) {
	Animal::operator=(rhs);
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Wouf" << std::endl;
}
