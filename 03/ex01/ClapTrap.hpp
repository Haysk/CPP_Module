/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:05:33 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/31 22:01:12 by adylewsk         ###   ########.fr       */
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

		std::string		getName() const;
		unsigned int	getHit() const;
		unsigned int	getEnergy() const;
		unsigned int	getDamage() const;

		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);


	protected :

		void	setName(std::string name);
		void	setHit(unsigned int hit);
		void	setEnergy(unsigned int energy);
		void	setDamage(unsigned int damage);

		std::string		name;
		int	hit;
		unsigned int	energy;
		unsigned int	damage;
		
		ClapTrap(void);
};

std::ostream & operator<<(std::ostream & lhs, ClapTrap const & rhs);

#endif
