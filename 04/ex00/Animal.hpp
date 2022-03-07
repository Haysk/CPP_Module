/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:43:07 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 03:18:37 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal {
	public :
		
		Animal();
		Animal(std::string type);
		Animal(Animal & cp);
		virtual ~Animal();

		std::string		getType() const;

		virtual void	makeSound() const;
		Animal & operator=(Animal const &  rhs);

	private :
		
		std::string	type;
};

std::ostream & operator<<(std::ostream &ostream, Animal const & rhs);

#endif
