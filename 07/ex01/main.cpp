/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:53:19 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/09 12:12:14 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	aff(T const & t) {
	std::cout << t << std::endl;
}

void	put(std::string const & i) {
	std::cout << i << std::endl;
}

int main()
{
	std::string	tabPtr[] = {"toto", "tata", "titi"};
	iter<std::string>(tabPtr, 3 , put);
	std::cout << std::endl;
	iter<std::string>(tabPtr, 3 , aff<std::string>);
	return 0;
}

