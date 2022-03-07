/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:20:30 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 03:22:17 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(Cat & cp): Animal(cp.getType()) {
	std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
}

Cat & Cat::operator=(Cat const &  rhs) {
	Animal::operator=(rhs);
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}
