/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:05:18 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/31 18:03:47 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Clapounet");
	ClapTrap	b(a);
	ClapTrap	c("Clapito");

	std::cout << "A-----------" << std::endl;
	a.attack("Toto l'asticot");
	a.takeDamage(5);
	a.beRepaired(2);
	a.attack("Toto l'asticot");
	a.takeDamage(5);
	a.beRepaired(2);
	a.attack("Toto l'asticot");
	a.beRepaired(2);
	a.attack("Toto l'asticot");
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	std::cout << "B-----------" << std::endl;
	b.attack("Toto l'asticot");
	b.takeDamage(5);
	b.beRepaired(2);
	b.attack("Toto l'asticot");
	b.takeDamage(5);
	b.beRepaired(2);
	b.attack("Toto l'asticot");
	b.beRepaired(2);
	b.attack("Toto l'asticot");
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.takeDamage(5);
	b.takeDamage(5);
	b.takeDamage(5);
	std::cout << "C-----------" << std::endl;
	c.attack("Toto l'asticot");
	c.takeDamage(5);
	c.beRepaired(2);
	c.attack("Toto l'asticot");
	c.takeDamage(5);
	c.beRepaired(2);
	c.attack("Toto l'asticot");
	c.beRepaired(2);
	c.attack("Toto l'asticot");
	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.takeDamage(5);
	c.takeDamage(5);
	c.takeDamage(5);
}
