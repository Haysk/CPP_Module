/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:05:33 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/01 01:59:42 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
	public :
		ClapTrap(std::string name_);
		ClapTrap(ClapTrap & copy);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap & rhs);

		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		getName() const;
		unsigned int	getHit() const;
		unsigned int	getEnergy() const;
		unsigned int	getDamage() const;

	protected :

		ClapTrap(void);

		std::string		name;
		int	hit;
		unsigned int	energy;
		unsigned int	damage;
};

std::ostream & operator<<(std::ostream & lhs, ClapTrap const & rhs);

#endif
