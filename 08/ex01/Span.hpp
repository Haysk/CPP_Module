/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:54:03 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/11 22:09:43 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <stdexcept>

class	Span {

	public :

		Span();
		Span(unsigned int );
		Span(Span const &);
		~Span();

		std::vector<int>	getVec() const;
		void				addNumber(int);
		void				addRangeNumber(std::vector<int>);
		int					longestSpan();
		int					shortestSpan();

		Span	& operator=(Span const &);

	private :

		std::vector<int>	vec;

	protected :

};

#endif

