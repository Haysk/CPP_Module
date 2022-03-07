/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:09:44 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/08 09:46:58 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdexcept>

class	Data {

	public :

		Data(int, int);
		Data(Data &);
		~Data();

		Data	& operator=(Data const &);
		
		int	getData(void) const;
		int	getData2(void) const;

		class	ptrNullException : public std::exception {
			public :
				virtual const char	* what () const throw() {
					return ("Data ptr Null");
				}
		};
	
	private :
		int	data;
		int	data2;

		

	protected :

};

#endif

