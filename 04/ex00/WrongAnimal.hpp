/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:43:07 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/02 22:11:21 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal {
	public :
		
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal & cp);
		virtual ~WrongAnimal();

		std::string		getType() const;

		void	makeSound() const;
		WrongAnimal & operator=(WrongAnimal const &  rhs );

	private :
		
		std::string	type;
};

std::ostream & operator<<(std::ostream &ostream, WrongAnimal const & rhs);

#endif
