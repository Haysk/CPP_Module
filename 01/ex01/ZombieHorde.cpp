/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:56:07 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 22:10:45 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	 Zombie* zombies = new Zombie[N];
	 for (int i = 0; i < N; i++)
		 zombies[i].setZombieName(name);
	 return (zombies);
}
