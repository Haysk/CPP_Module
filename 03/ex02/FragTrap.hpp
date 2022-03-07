/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:40:22 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/31 22:44:11 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class	FragTrap : public ClapTrap {
	public :
		FragTrap(std::string name_);
		FragTrap(FragTrap & copy);
		~FragTrap(void);

		FragTrap & operator=(FragTrap & rhs);

		void	attack(std::string target);
		void	highFiveGuys(void) const ;

	private :
		FragTrap(void);
};

#endif
