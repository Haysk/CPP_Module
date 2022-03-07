/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:24:29 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 22:31:19 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR;
	std::string& stringREF = str;

	stringPTR = &str;
	std::cout << "memory address str : " << &str << std::endl;
	std::cout << "memory address ptr : " << stringPTR << std::endl;
	std::cout << "memory address ref : " << &stringREF << std::endl;
	
	std::cout << "value str : " << str << std::endl;
	std::cout << "value ptr : " << *stringPTR << std::endl;
	std::cout << "value ref : " << stringREF << std::endl;
}
