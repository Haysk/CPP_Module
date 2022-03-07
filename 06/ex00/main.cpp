/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 05:20:41 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/08 08:21:19 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConv.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	ScalarConv	sc(av[1]);
	std::cout << sc;
	return 0;
}

