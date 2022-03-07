/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:26:01 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/25 17:43:03 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanB {

	public :

	HumanB(std::string name_);
	~HumanB();

	void	setWeapon(Weapon& weapon_);

	void	attack() const;

	private :

	std::string	name;
	Weapon*		weapon;
};

#endif
