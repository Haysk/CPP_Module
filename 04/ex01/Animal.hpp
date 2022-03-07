/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:43:07 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:04:32 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal {
	public :
		
		Animal();
		Animal(std::string type);
		Animal(Animal & cp);
		virtual ~Animal();

		std::string		getType() const;
		virtual Brain	* getBrain() const = 0;

		virtual void	makeSound() const;
		virtual	Animal & operator=(Animal const & rhs );

	protected :

		std::string	type;
};

std::ostream & operator<<(std::ostream &ostream, Animal const & rhs);

#endif
