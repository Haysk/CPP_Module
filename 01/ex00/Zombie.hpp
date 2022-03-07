/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:23:00 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 21:45:00 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <string>
#include <iostream>
#include <memory>

class Zombie {
	public :

	Zombie(std::string name);
	~Zombie();

	void	announce(void);

	private :

		std::string zombieName;
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
