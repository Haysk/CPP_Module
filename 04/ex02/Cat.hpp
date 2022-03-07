/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:12:51 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:13:39 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAAT_HPP
#define CAAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat: public AAnimal {
	public :
		Cat();
		Cat(Cat & cp);
		virtual	~Cat();

		virtual	Cat		& operator=(Cat const & rhs);
		virtual	AAnimal	& operator=(AAnimal const & rhs);

		Brain	* getBrain() const;

		virtual void	makeSound() const;
	private :
		Brain	* brain;
};

#endif
