/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 06:02:21 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/04 22:06:48 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
std::cout << "----------------------------------------------" << std::endl;
try	{
	Bureaucrat bicarbonat("Bicarbonat", 138);
	Bureaucrat binouz("Binouz", 1);
	ShrubberyCreationForm shru("client");

	std::cout << shru;
	bicarbonat.signForm(shru);
	binouz.signForm(shru);
	binouz.executeForm(shru);
	bicarbonat.executeForm(shru);
	std::cout << shru;
}
catch (std::exception & e) {
	std::cerr << e.what() << std::endl;
}
std::cout << "----------------------------------------------" << std::endl;
try	{
	Bureaucrat bicarbonat("Bicarbonat", 138);
	Bureaucrat binouz("Binouz", 1);
	RobotomyRequestForm robo("client");

	std::cout << robo;
	bicarbonat.signForm(robo);
	binouz.signForm(robo);
	binouz.executeForm(robo);
	binouz.executeForm(robo);
	bicarbonat.executeForm(robo);
	std::cout << robo;
}
catch (std::exception & e) {
	std::cerr << e.what() << std::endl;
}
std::cout << "----------------------------------------------" << std::endl;
try	{
	Bureaucrat bicarbonat("Bicarbonat", 138);
	Bureaucrat binouz("Binouz", 1);
	PresidentialPardonForm patron("client");

	std::cout << patron;
	bicarbonat.signForm(patron);
	binouz.signForm(patron);
	binouz.executeForm(patron);
	bicarbonat.executeForm(patron);
	std::cout << patron;
}
catch (std::exception & e) {
	std::cerr << e.what() << std::endl;
}
	return 0;
}

