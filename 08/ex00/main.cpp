/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:43:09 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/11 03:29:39 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include "easyfind.hpp"

int main()
{
	std::set<int> tab;
	int res;

	for (int i = 0; i < 10; i++)
		tab.insert(i);
	try {
		res = easyfind(tab, 5);
		std::cout << res << std::endl;
	}
	catch (std::exception e) {
		std::cout << "Not found" << std::endl;
	}
	try {
		res = easyfind(tab, 11);
		std::cout << res << std::endl;
	}
	catch (std::exception e) {
		std::cout << "Not found" << std::endl;
	}
	return 0;
}

