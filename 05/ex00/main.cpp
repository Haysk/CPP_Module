/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 06:02:21 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 08:29:08 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try	{
		Bureaucrat robert("Robert", 1);
		std::cout << robert;
		robert.downGrade(5);
		std::cout << robert;	
		robert.upGrade(4);
		std::cout << robert;	
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try	{
		Bureaucrat bobby("Bobby", 145);
		std::cout << bobby;
		bobby.downGrade(5);
		std::cout << bobby;	
		bobby.downGrade(5);
		std::cout << bobby;	
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try	{
		Bureaucrat bobispo("Bobispo", 145);
		std::cout << bobispo;
		bobispo.upGrade(145);
		std::cout << bobispo;	
		bobispo.upGrade(5);
		std::cout << bobispo;	
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try	{
		Bureaucrat binouse("Binouse", 160);
		std::cout << binouse;
		binouse.upGrade(145);
		std::cout << binouse;	
		binouse.upGrade(5);
		std::cout << binouse;	
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try	{
		Bureaucrat biciclet("Biciclet", 0);
		std::cout << biciclet;
		biciclet.upGrade(145);
		std::cout << biciclet;	
		biciclet.upGrade(5);
		std::cout << biciclet;	
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

