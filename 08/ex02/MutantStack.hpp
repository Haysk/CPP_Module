/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:26:45 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/11 22:49:56 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <stdexcept>

template<typename T>
class	MutantStack : public std::stack<T> {

	public :

		MutantStack(): std::stack<T>() {};
		MutantStack(const MutantStack<T>& src) { *this = src; }
		MutantStack(const std::stack<T>& src) { *this = src; }
		~MutantStack() {};
		using  std::stack<T>::operator=;

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

		typedef typename std::stack<T>::container_type::const_iterator constIterator;
		constIterator begin() const { return this->c.begin(); }
		constIterator end() const { return this->c.end(); }
	private :



	protected :

};

#endif

