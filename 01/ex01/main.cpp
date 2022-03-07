/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:19:59 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 22:23:36 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie* zombies = zombieHorde(10, "pouik");
	for (int i = 0; i < 10; i++) {
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}
