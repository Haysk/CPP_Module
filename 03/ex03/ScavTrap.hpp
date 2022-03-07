/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:05:33 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/01 00:43:06 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	ScavTrap : virtual public ClapTrap {
	public :
		ScavTrap(std::string name_);
		ScavTrap(ScavTrap & copy);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap & rhs);

		void	attack(std::string target);
		void	guardGate(void) const;

	protected :
		ScavTrap(void);
};

#endif
