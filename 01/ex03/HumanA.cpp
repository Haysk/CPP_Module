/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:22:49 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/25 17:40:37 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon& weapon_): name(name_), weapon(weapon_) {
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their "
				<< this->weapon.getType() << std::endl;
}
