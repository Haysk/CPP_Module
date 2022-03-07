/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:40:15 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/01 02:02:38 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_) {
	std::cout << "create FragTrap " << this->name << std::endl;
	this->name = name_;
	this->hit = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(FragTrap & copy) {
	std::cout << "copy FragTrap " << this->name << std::endl;
	this->name = copy.getName();
	this->hit = copy.getHit();
	this->energy = copy.getEnergy();
	this->damage = copy.getDamage();
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor " << this->name << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap & rhs) {
	std::cout << this->getName() << " = " << rhs.getName() << std::endl;
	this->name = rhs.getName();
	this->hit = rhs.getHit();
	this->energy = rhs.getEnergy();
	this->damage = rhs.getDamage();
	return (*this);
}

void	FragTrap::attack(std::string target) {
	if (this->hit > 0) {
		if (this->energy > 0) {
			std::cout << "Awesome FragTrap " << this->getName() << " attacks " << target
				<< ", causing " << this->getDamage() << " points of damages!"
				<< std::endl;
			this->energy--;
		} else {
			std::cout << this->name << " has " << this->energy << " energy !!"
				<< std::endl;
		}
	}
}

void	FragTrap::highFiveGuys(void) const {
	if (this->hit > 0) {
		std::cout << "FragTrap " << this->name << " wants a High Five"
		<< std::endl;
	}
}
