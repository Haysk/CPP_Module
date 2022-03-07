/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:12:51 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 02:42:21 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal {
	public :
		Cat();
		Cat(Cat & cp);
		~Cat();
	
		Cat & operator=(Cat const &  rhs);
		virtual void	makeSound() const;
};

#endif
