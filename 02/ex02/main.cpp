/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:10:08 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/28 19:30:35 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a-- : " << a-- << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "max(a, b) : " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) : " << Fixed::min(a, b) << std::endl;
	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a <= a : " << (a <= a) << std::endl;
	std::cout << "b >= b : " << (b >= b) << std::endl;
	std::cout << "b + b : " << b + b << std::endl;
	std::cout << "b - 3 : " << b - 3.f << std::endl;
	std::cout << "b / 4 : " << b / 4 << std::endl;
	std::cout << "b * 5 : " << b * 5 << std::endl;


	return 0;
}
