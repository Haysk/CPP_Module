/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:10:20 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/28 19:29:15 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <complex>

Fixed::Fixed(void) : value(0) {
}

Fixed::Fixed(const Fixed & cp) {
	this->value = cp.getRawBits();
}
Fixed::Fixed(const int & i) {
	this->value = i << this->fractBits;
}

Fixed::Fixed(const float & f) {
	int pow = std::pow(2, this->fractBits);

	this->value = roundf(f * pow);
}

Fixed::~Fixed(void) {
}

int		Fixed::getRawBits (void) const {
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

Fixed & Fixed::operator=(Fixed const & rhs) {
	this->setRawBits(rhs.getRawBits());
	return (*this);
}
bool	Fixed::operator>(Fixed const &rhs) const {
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const {
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const {
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const {
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const {
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const {
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs) const {
	Fixed	tmp;
	tmp.setRawBits(this->value + rhs.getRawBits());

	return (tmp);
}

Fixed	Fixed::operator-(Fixed const &rhs) const {
	Fixed	tmp;
	tmp.setRawBits(this->value - rhs.getRawBits());

	return (tmp);
}

Fixed	Fixed::operator*(Fixed const &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const {
	Fixed	tmp;
	if (rhs.toFloat() == 0.f)
		return Fixed(tmp = *this);
	return Fixed(this->toFloat() / rhs.toFloat());
}


Fixed	&Fixed::operator++(void) {
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;
	++*this;
	return (tmp);
}

Fixed	&Fixed::operator--(void) {
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;
	--*this;
	return (tmp);
}

Fixed &	Fixed::min(Fixed & a, Fixed & b) {
	if (a > b)
		return (b);
	return (a);
}
Fixed const &	Fixed::min(Fixed const & a, Fixed const & b) {
	if (a > b)
		return (b);
	return (a);
}
Fixed &	Fixed::max(Fixed & a, Fixed & b) {
	if (a < b)
		return (b);
	return (a);
}
Fixed const &	Fixed::max(Fixed const & a, Fixed const & b) {
	if (a < b)
		return (b);
	return (a);
}

std::ostream & operator<<(std::ostream & lhs, Fixed const & rhs) {
	lhs << rhs.toFloat();
	return (lhs);
}
