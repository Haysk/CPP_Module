/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:32:05 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:08:26 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain & cp) {
	std::cout << "Brain copy constructor" << std::endl;
	*this = cp;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor" << std::endl;
}

std::string	Brain::getIdeas(int i) const {
	if (i >= 0 && i < 100)
		return (this->ideas[i]);
	return (std::string());
}

void	Brain::setIdeas(std::string idea, int i) {
	if (i >= 0 && i < 100)
		this->ideas[i].assign(idea);
}

Brain	& Brain::operator=(Brain const & cp) {
	std::cout << "Brain =" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cp.ideas[i];
	return (*this);
}
