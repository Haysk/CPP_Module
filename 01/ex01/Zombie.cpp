/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:20:56 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 22:35:08 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): zombieName("") {

}

Zombie::~Zombie(void) {
	std::cout << this->zombieName << std::endl;
}

void	Zombie::setZombieName(std::string name) {
	this->zombieName = name;
}

void	Zombie::announce(void) {
	std::cout << this->zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

