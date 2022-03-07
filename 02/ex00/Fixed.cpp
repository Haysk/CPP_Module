/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:10:20 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/27 18:38:44 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed & cp) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = cp.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

int		Fixed::getRawBits (void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}
void	Fixed::setRawBits (int const raw) {
	this->value = raw;
}


