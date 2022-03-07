/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:20:30 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/02 22:23:12 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat & cp): WrongAnimal(cp.getType()) {
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}
