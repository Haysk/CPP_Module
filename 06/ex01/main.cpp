/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:08:40 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/08 10:07:58 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	if (ptr ==  NULL)
		throw	Data::ptrNullException();
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	* deserialize(uintptr_t raw) {
	Data		*ptrData;
	if (raw  == 0)
		throw	Data::ptrNullException();
	ptrData = reinterpret_cast<Data*>(raw);
	return (ptrData);
}

int main()
{
	Data		*toto = new Data(2, 3);
	Data		*ptrToto;
	uintptr_t	uptr;

	uptr =  serialize(toto);
	std::cout << toto << std::endl;
	std::cout << uptr << std::endl;
	ptrToto = deserialize(uptr);
	std::cout << ptrToto << std::endl;
	std::cout << ptrToto->getData() << " " << ptrToto->getData2() << std::endl;
	try {
		uptr = serialize(NULL);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		ptrToto = deserialize(uptr);
	std::cout << ptrToto->getData() << " " << ptrToto->getData2() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	delete toto;
	return 0;
}

