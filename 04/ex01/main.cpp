/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:46:35 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 04:08:10 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*animals[5];
	Brain * brain;

	for (int i = 0; i < 5; i++) {
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	brain = animals[1]->getBrain();
	brain->setIdeas("toto", 0);
	brain->setIdeas("tata", 1);
	*animals[3] = *animals[1];
	brain = animals[3]->getBrain();

	std::cout << brain->getIdeas(0) << std::endl;
	std::cout << brain->getIdeas(1) << std::endl;

	for (int i = 0; i < 5; i++)
		delete animals[i];
	return 0;
}
