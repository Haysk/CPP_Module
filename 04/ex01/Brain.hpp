/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:32:01 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 00:13:19 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain {
	public :

		Brain();
		Brain(const Brain & cp);
		~Brain();

		void		setIdeas(std::string idea, int i);
		std::string	getIdeas(int i) const;
		Brain		& operator=(const Brain & cp);

	protected :
		std::string	ideas[100];
};

#endif
