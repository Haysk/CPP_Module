/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:10:44 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/27 18:37:51 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class	Fixed {
	
	public :

		Fixed();
		Fixed(Fixed & cp);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw) ;

		Fixed &	operator=(Fixed const & rhs);

	private :

		int	value;
		static int const	fractBits = 8;

};

#endif
