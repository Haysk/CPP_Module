/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:05:33 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/31 22:43:34 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	ScavTrap : public ClapTrap {
	public :
		ScavTrap(std::string name_);
		ScavTrap(ScavTrap & copy);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap & rhs);

		void	attack(std::string target);
		void	guardGate(void) const;

	private :
		ScavTrap(void);
};

#endif
