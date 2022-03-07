/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:20:30 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:15:02 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): AAnimal("Dog") {
	std::cout << "Dog constructor" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog & cp): AAnimal(cp.getType()) {
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
	AAnimal::operator=(rhs);
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

AAnimal	& Dog::operator=(AAnimal const & rhs) {
	AAnimal::operator=(rhs);
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Wouf" << std::endl;
}
