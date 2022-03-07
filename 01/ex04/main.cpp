/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:49:30 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/25 23:45:33 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char** av) {
	if (ac != 4) {
		std::cout << "ERROR: ./replace [fileName] [s1] [s2]";
		return (1);
	}
	Replace replace(av[1], av[2], av[3]);
	replace.writeReplaceFile();
}
