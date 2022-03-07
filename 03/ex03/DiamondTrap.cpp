/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:31:40 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/01 17:12:28 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name_): ClapTrap(name_ + "_clap_name"), FragTrap(name_ + "_clap_name"), ScavTrap(name_ + "_clap_name") {
	this->name = name_;
	this->hit = FragTrap::hit;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(DiamondTrap & copy): ClapTrap(copy.getName() + "_clap_name"), FragTrap(copy.getName() + "_clap_name"), ScavTrap(copy.getName() + "_clap_name") {
	this->name = copy.getName();
	this->hit = copy.getHit();
	this->energy = copy.getEnergy();
	this->damage = copy.getDamage();
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "Destroy DiamondTrap" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap & rhs) {
	std::cout << "Assignation does not work" << " (" << rhs.getName() <<")" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(std::string target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() const {
	std::cout << "Name : " << this->getName() << std::endl
		<< "ClapTrap name : " << ClapTrap::name << std::endl;
}

std::string	DiamondTrap::getName(void) const {
	return (this->name);
}

unsigned int	DiamondTrap::getHit(void) const {
	return (this->hit);
}

unsigned int	DiamondTrap::getEnergy(void) const {
	return (this->energy);
}

unsigned int	DiamondTrap::getDamage(void) const {
	return (this->damage);
}
