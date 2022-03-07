/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:05:18 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/31 21:26:30 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	a("Clapounet");
	ClapTrap	b(a);
	ClapTrap	c("Clapito");
	ScavTrap	d("Stavounet");
	ScavTrap	e(d);
	ScavTrap	f("Stavito");
	e = f;
	b = c;
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
	std::cout << "D-----------" << std::endl;
	d.attack("Toto l'asticot");
	d.takeDamage(5);
	d.beRepaired(2);
	d.attack("Toto l'asticot");
	d.takeDamage(5);
	d.beRepaired(2);
	d.attack("Toto l'asticot");
	d.beRepaired(2);
	d.attack("Toto l'asticot");
	d.guardGate();
	d.beRepaired(2);
	d.beRepaired(2);
	d.beRepaired(2);
	d.beRepaired(2);
	d.beRepaired(2);
	d.beRepaired(2);
	d.beRepaired(2);
	d.beRepaired(2);
	d.takeDamage(5);
	d.takeDamage(5);
	d.takeDamage(5);
	std::cout << "E-----------" << std::endl;
	e.attack("Toto l'asticot");
	e.takeDamage(5);
	e.beRepaired(2);
	e.attack("Toto l'asticot");
	e.takeDamage(5);
	e.beRepaired(2);
	e.attack("Toto l'asticot");
	e.beRepaired(2);
	e.attack("Toto l'asticot");
	e.guardGate();
	e.beRepaired(2);
	e.beRepaired(2);
	e.beRepaired(2);
	e.beRepaired(2);
	e.beRepaired(2);
	e.beRepaired(2);
	e.beRepaired(2);
	e.beRepaired(2);
	e.takeDamage(5);
	e.takeDamage(5);
	e.takeDamage(5);
	std::cout << "F-----------" << std::endl;
	f.attack("Toto l'asticot");
	f.takeDamage(5);
	f.beRepaired(2);
	f.attack("Toto l'asticot");
	f.takeDamage(5);
	f.beRepaired(2);
	f.attack("Toto l'asticot");
	f.beRepaired(2);
	f.attack("Toto l'asticot");
	f.guardGate();
	f.beRepaired(2);
	f.beRepaired(2);
	f.beRepaired(2);
	f.beRepaired(2);
	f.beRepaired(2);
	f.beRepaired(2);
	f.beRepaired(2);
	f.beRepaired(2);
	f.takeDamage(5);
	f.takeDamage(5);
	f.takeDamage(5);
	std::cout << "END-----------" << std::endl;
}
