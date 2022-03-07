/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:27:10 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/25 16:58:09 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define	WEAPON_HPP

#include <string>

class	Weapon {
	public :

	Weapon(std::string name);
	~Weapon();

	std::string	getType() const;
	void		setType(std::string type);

	private :

	std::string type;
};

#endif
