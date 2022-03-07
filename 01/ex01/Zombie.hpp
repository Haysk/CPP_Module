/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:23:00 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 22:17:02 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <string>
#include <iostream>
#include <memory>

class Zombie {
	public :

	Zombie();
	~Zombie();

	void	announce(void);
	void	setZombieName(std::string name);

	private :

		std::string zombieName;
};

Zombie* zombieHorde( int N, std::string name );

#endif
