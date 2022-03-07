/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:10:44 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/28 18:39:19 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class	Fixed {
	
	public :

		Fixed();
		Fixed(const Fixed & cp);
		Fixed(const int & cp);
		Fixed(const float & cp);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw) ;
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed &	operator=(Fixed const & rhs);
		
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static Fixed		&min(Fixed & a, Fixed & b);
		static Fixed const	&min(Fixed const & a, Fixed const & b);
		static Fixed		&max(Fixed & a, Fixed & b);
		static Fixed const	&max(Fixed const & a, Fixed const & b);

	private :

		int	value;
		static int const	fractBits = 8;

};

std::ostream & operator<<(std::ostream & lhs, Fixed const & rhs);

#endif
