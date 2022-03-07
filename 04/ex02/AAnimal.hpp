/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:43:07 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:11:48 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAAL_HPP
#define AANIMAAL_HPP

#include <iostream>
#include "Brain.hpp"

class	AAnimal {
	public :
		
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal & cp);
		virtual ~AAnimal();

		std::string		getType() const;
		virtual Brain	* getBrain() const = 0;

		virtual void	makeSound() const = 0;
		virtual	AAnimal & operator=(AAnimal const & rhs );

	protected :

		std::string	type;
};

std::ostream & operator<<(std::ostream &ostream, AAnimal const & rhs);

#endif
