/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:43:19 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/02 22:11:39 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Empty WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type_): type(type_) {
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & cp): type(cp.getType()) {
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "BOUYACHAKALAKA !!!" << std::endl;
}


