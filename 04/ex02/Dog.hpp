/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:12:51 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:13:28 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog: public AAnimal {
	public :
		Dog();
		Dog(Dog & cp);
		virtual	~Dog();
	
		virtual	Dog		& operator=(Dog const & rhs);
		virtual	AAnimal	& operator=(AAnimal const & rhs);

		virtual	Brain	* getBrain() const;	

		virtual void	makeSound() const;
	private :
		Brain	* brain;
};

#endif
