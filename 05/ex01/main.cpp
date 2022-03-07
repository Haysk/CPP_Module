/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 06:02:21 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 23:53:13 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try	{
		Form form("Form1", 100, 151);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try	{
		Form form("Form2", 151, 150);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try	{
		Form form("Formr3", 0, 150);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try	{
		Form form("Formr4", 150, 0);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try	{
		Bureaucrat binouse("Binouse", 1);
		Form form("Formr5", 1, 15);

		std::cout << form;
		binouse.signForm(form);
		std::cout << form;
		binouse.signForm(form);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try	{
		Bureaucrat bicarbonat("Bicarbonat", 150);
		Form form("Formr6", 149, 2);

		std::cout << form;
		bicarbonat.signForm(form);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

