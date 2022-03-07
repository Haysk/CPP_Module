/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:53:22 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/09 12:06:27 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <stdexcept>

template<typename T, typename R>
void	iter(T * tab, std::size_t size, R (*func)(T const &)) {
	for (std::size_t i = 0; i < size; i++) {
		func(tab[i]);
	}
}

#endif

