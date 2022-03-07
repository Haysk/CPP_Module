/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:23:17 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/25 17:21:25 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
#define	HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanA {

	public :

		HumanA(std::string name_, Weapon& weapon_);
		~HumanA();

		void	attack();

	private :
		std::string	name;
		Weapon&		weapon;
};

#endif
