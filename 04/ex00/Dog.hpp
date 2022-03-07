/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:12:51 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 03:21:12 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog: public Animal {
	public :
		Dog();
		Dog(Dog & cp);
		~Dog();
	
		Dog & operator=(Dog const &  rhs);
		virtual void	makeSound() const;
};

#endif
