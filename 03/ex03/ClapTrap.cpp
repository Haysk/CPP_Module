/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:05:26 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/01 02:16:12 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name(""), hit(10), energy(10), damage(0) {}

ClapTrap::ClapTrap(std::string name_) : name(name_), hit(10), energy(10), damage(0) {
	std::cout << "create ClapTrap " << this->name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & copy): name(copy.name) {
	std::cout << "copy ClapTrap " << this->name << std::endl;
	this->hit = copy.hit;
	this->energy = copy.energy;
	this->damage = copy.damage;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor " << this->name << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap & rhs) {
	std::cout << this->name << " = " << rhs.name << std::endl;
	this->name = rhs.getName();
	this->hit = rhs.getHit();
	this->energy = rhs.getEnergy();
	this->damage = rhs.getDamage();
	return (*this);
}

void	ClapTrap::attack(const std::string & target) {
	if (this->hit > 0) {
		if (this->energy > 0) {
			std::cout << "ClapTrap " << this->name << " attacks " << target
				<< ", causing " << this->damage << " points of damages!"
				<< std::endl;
			this->energy--;
		} else {
			std::cout << this->name << " has " << this->energy << " energy !!"
				<< std::endl;
		}
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit > 0) {
		std::cout << "ClapTrap " << this->name << " take " << amount
			<< " points of damages!" << std::endl;
		if ((int)amount > this->hit)
			this->hit = 0;
		else
			this->hit -= amount;
	}
	if (this->hit == 0) {
		std::cout << this->name << " is dead !!" << std::endl;
		this->hit = -1;
	}
}
void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit > 0) {
		if (this->energy > 0) {
			std::cout << "ClapTrap " << this->getName() << " be repaired " << amount
				<< " points of damages!" << std::endl;
			this->hit += amount;
			this->energy--;
		} else {
			std::cout << this->name << " has " << this->energy << " energy !!"
				<< std::endl;
		}
	}
}

std::string	ClapTrap::getName(void) const {
	return (this->name);
}
unsigned int	ClapTrap::getHit(void) const {
	return (this->hit);
}

unsigned int	ClapTrap::getEnergy(void) const {
	return (this->energy);
}

unsigned int	ClapTrap::getDamage(void) const {
	return (this->damage);
}

std::ostream & operator<<(std::ostream & lhs, ClapTrap const & rhs) {
	lhs << rhs.getName();
	return (lhs);
}
