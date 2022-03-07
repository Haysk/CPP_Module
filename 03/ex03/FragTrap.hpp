/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:40:22 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/01 00:43:18 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	FragTrap : virtual public ClapTrap {
	public :
		FragTrap(std::string name_);
		FragTrap(FragTrap & copy);
		~FragTrap(void);

		FragTrap & operator=(FragTrap & rhs);

		void	attack(std::string target);
		void	highFiveGuys(void) const;

	protected :
		FragTrap(void);
};

#endif
