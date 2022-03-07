/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:31:49 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/01 02:04:57 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap {
	public :
		DiamondTrap(std::string name_);
		DiamondTrap(DiamondTrap & copy);
		~DiamondTrap(void);

		DiamondTrap & operator=(DiamondTrap & rhs);

		void	attack(std::string target);
		void	whoAmI() const;
		
		std::string		getName(void) const;
		unsigned int	getHit(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getDamage(void) const;

	private :
		DiamondTrap(void);
		std::string	name;
}; 

#endif
