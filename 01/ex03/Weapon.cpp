/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:51:21 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/25 17:02:49 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name): type(name) {
}

Weapon::~Weapon() {
}

std::string	Weapon::getType() const {
	return (this->type);
}

void Weapon::setType(std::string name) {
	this->type = name;
}
