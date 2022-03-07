/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:21:52 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/25 17:43:08 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_): name(name_) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &weapon_) {
	this->weapon = &weapon_;
}

void	HumanB::attack() const {
	std::cout << this->name << " attacks with their "
				<< this->weapon->getType() << std::endl;
}
