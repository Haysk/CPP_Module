/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:12:51 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:09:51 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal {
	public :
		Cat();
		Cat(Cat & cp);
		virtual	~Cat();

		virtual	Cat		& operator=(Cat const & rhs);
		virtual	Animal	& operator=(Animal const & rhs);

		Brain	* getBrain() const;

		virtual void	makeSound() const;
	private :
		Brain	* brain;
};

#endif
