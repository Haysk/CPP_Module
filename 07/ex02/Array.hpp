/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:31:43 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/10 21:56:55 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class	Array {

	public :

		Array():n(0), array(NULL) {};
		
		Array(unsigned int n_): n(n_), array(new T[n_]()) {
		}

		Array(Array const & cp) {
			*this = cp;
		}

		~Array() {
			if (this->array != NULL)	
				delete [] this->array;
		}

		unsigned int	size() const {
			return (this->n);
		}

		Array const	& operator=(Array const & cp) {
			if (this->array != NULL)
				this->~Array();
			Array();
			this->n = cp.size();
			this->array = new T[this->n];
			for (unsigned int i = 0; i < this->n; i++)
				this->array[i] = cp[i];
			return (*this);
		}

		T	& operator[](unsigned int const & index) const {
			if (index >= n)
				throw (ArrayOverflowException());
			return (this->array[index]);
		}

		class	ArrayOverflowException: public std::exception {
			public :
				virtual const char	*what() const throw() {
				return ("Array Overflow !!");
			}
		};

	private :

		unsigned int	n;
		T				* array;

	protected :

};

#endif

