/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:05:56 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/31 23:05:21 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name_): ClapTrap(name_) {
	std::cout << "create ScavTrap " << this->name << std::endl;
	this->hit = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(ScavTrap & copy) {
	std::cout << "copy ScavTrap " << this->name << std::endl;
	this->name = copy.getName();
	this->hit = copy.getHit();
	this->energy = copy.getEnergy();
	this->damage = copy.getDamage();
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor " << this->name << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap & rhs) {
	std::cout << this->getName() << " = " << rhs.getName() << std::endl;
	this->setName(rhs.getName());
	this->setHit(rhs.getHit());
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	return (*this);
}

void	ScavTrap::attack(std::string target) {
	if (this->hit > 0) {
		if (this->energy > 0) {
			std::cout << "Awesome ScavTrap " << this->getName() << " attacks " << target
				<< ", causing " << this->getDamage() << " points of damages!"
				<< std::endl;
			this->energy--;
		} else {
			std::cout << this->name << " has " << this->energy << " energy !!"
				<< std::endl;
		}
	}
}

void	ScavTrap::guardGate(void) const {
	if (this->hit > 0) {
		std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode !"
		<< std::endl;
	}
}
