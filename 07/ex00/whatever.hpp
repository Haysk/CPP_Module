/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:53:40 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/09 09:53:41 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
void	swap(T & a, T & b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const &	min(T const & a, T const & b) {
	if (b <= a)
		return (b);
	return (a);
}

template<typename T>
T const &	max(T const & a, T const & b) {
	if (b >= a)
		return (b);
	return (a);
}
#endif

