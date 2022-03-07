/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:10:20 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/27 22:58:14 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <complex>

Fixed::Fixed(void) : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & cp) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = cp.getRawBits();
}
Fixed::Fixed(const int & i) {
	this->value = i << this->fractBits;
}

Fixed::Fixed(const float & f) {
	int pow = std::pow(2, this->fractBits);

	this->value = roundf(f * pow);
}

int		Fixed::getRawBits (void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}
void	Fixed::setRawBits (int const raw) {
	this->value = raw;
}

float		Fixed::toFloat(void) const {
	int pow = std::pow(2, this->fractBits);
	float	result = (float)this->value / pow;

	return (result);
}

int		Fixed::toInt(void) const {
	return (this->value >> this->fractBits);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

std::ostream & operator<<(std::ostream & lhs, Fixed const & rhs) {
	lhs << rhs.toFloat();
	return (lhs);
}
