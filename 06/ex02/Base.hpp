/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:16:30 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/09 04:44:22 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <stdexcept>

class	Base {

	public :
		Base();
		virtual	~Base();

	class	GenerationFailException : public std::exception {
		virtual	char const	*what() const throw() {
			return ("generation fail");
		
		}
	};
};

#endif

