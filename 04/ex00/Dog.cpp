/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:20:30 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 03:20:48 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(Dog & cp): Animal(cp.getType()) {
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs) {
	Animal::operator=(rhs);
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Wouf" << std::endl;
}
