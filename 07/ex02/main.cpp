/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:31:45 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/10 22:00:29 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#define MAX_VAL 750
int main()
{
	{
		Array<int>	tabNull;
		Array<int>	tab(5);
		Array<int>	tabCp;

		tabCp = tab;
		tabCp[0] = 1;
		std::cout << tab[0] << " " << tabCp[0] << std::endl;
		try {
			tab[-1];
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		Array<std::string>	tabNull;
		Array<std::string>	tab(5);
		Array<std::string>	tabCp;

		tabCp = tab;
		tabCp[0] = "toto";
		std::cout << tab[0] << " " << tabCp[0] << std::endl;
		try {
			tab[5];
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

	}
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	return 0;
}

