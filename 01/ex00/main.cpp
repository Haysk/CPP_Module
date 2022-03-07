/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:19:59 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 21:50:25 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie* zombie = newZombie("Foo");
	Zombie zombie2("z1");
	std::cout << "z0 created" << std::endl;
	std::cout << "z1 created" << std::endl;
	randomChump("z2");
	zombie->announce();
	zombie2.announce();
	delete zombie;
	return (0);
}
