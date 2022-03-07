/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:53:51 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/11 22:25:37 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp = Span(1000);
	std::vector<int> vec;
	std::vector<int>::iterator it; 
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch (std::exception e) {
		std::cout << "Span overflow" << std::endl;
	}
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception e) {
		std::cout << "error" << std::endl;
	}
	{
		std::vector<int> truc(1000, 1);
		try	{
			sp.addRangeNumber(truc);
		}
		catch (std::exception e) {
			std::cout << "Span overflow" << std::endl;
		}
	}
	{
		std::vector<int> truc(5, 1);
		try	{
			sp.addRangeNumber(truc);
			vec = sp.getVec();
			int i = 0;
			for (it = vec.begin(); it != vec.end(); it++) {
				std::cout << i << " : " << *it << std::endl;
				i++;
			}
		}
		catch (std::exception e) {
			std::cout << "Span overflow" << std::endl;
		}
	}
	return 0;
}

