/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConv.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 05:21:59 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/08 08:20:47 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONV_HPP
#define SCALARCONV_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdexcept>
#include <limits>
#include <climits>
#include <cmath>

class	ScalarConv {

	public :

		ScalarConv();
		ScalarConv(std::string const &);
		ScalarConv(ScalarConv const &);
		~ScalarConv();

		ScalarConv	& operator=(ScalarConv const &);

		int		getInt() const;
		char	getChar() const;
		float	getFloat() const;
		double	getDouble() const;

		std::stringstream	getFormInt() const;
		std::string	getFormChar() const;
		std::stringstream	getFormFloat() const;
		std::stringstream	getFormDouble() const;

		void	convert(std::string const &, int const);
		int		paramType(std::string const &) const;

		bool	isInt(std::string const &) const;
		bool	isChar(std::string const &) const;
		bool	isFloat(std::string const &) const;
		bool	isDouble(std::string const &) const;
		
		void	convertInt(std::string const &);
		void	convertChar(std::string const &);
		void	convertFloat(std::string const &);
		void	convertDouble(std::string const &);

		class	ConvertFailException: public std::exception {
			public :
				virtual const char	* what() const throw () {
					return ("Convertion failure");
				}
		};

	private :

		int		typeInt;
		char	typeChar;
		float	typeFloat;
		double	typeDouble;

	protected :

};

std::ostream	& operator<<(std::ostream &, ScalarConv const &);

#endif

