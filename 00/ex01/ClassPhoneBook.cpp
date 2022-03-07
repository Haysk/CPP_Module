/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:36:20 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 15:00:35 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClassContact.hpp"
#include "ClassPhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook(Contact *tabContacts, int lenContacts):
	contacts(tabContacts),
	nbContacts(lenContacts) {
}

PhoneBook::~PhoneBook() {
}

int	PhoneBook::actions(std::string action) const {
	if (!action.compare("ADD"))
		return (1);
	if (!action.compare("SEARCH"))
		return (2);
	return (0);
}

void	PhoneBook::addContact() {
	std::string	userInput;
	Contact	*contact;
	int	index;
	
	index = -1;
	for (int i = 0; i < this->nbContacts; i++) {
		if (!this->contacts[i].isSet) {
			this->contacts[i].initContact();
			return ;
		}
	}
	this->putContacts();
	while ((contact = this->getSetContact(index)) == NULL
			&& userInput.compare("q")) {
		std::cout << "Index -> ";
		std::getline(std::cin, userInput);
		if (userInput.find_first_not_of("0123456789") == std::string::npos)
			index = std::atoi(userInput.data());
		std::cout << index;
	}
	if (contact)
		contact->initContact();
}

void	PhoneBook::putContacts() const {
	for (int i = 0; i < PhoneBook::nbContacts
			&& this->contacts[i].isSet; i++) {
		std::cout << std::right << std::setw(10)
			<< i;
		std::cout << "|";
		std::cout << std::right << std::setw(10)
			<< this->contacts[i].getFormFirstName();
		std::cout << "|";
		std::cout << std::right << std::setw(10)
			<< this->contacts[i].getFormLastName();
		std::cout << "|";
		std::cout << std::right << std::setw(10)
			<< this->contacts[i].getFormNickname() << std::endl;
	} 
}

Contact	*PhoneBook::getSetContact(int index) const {
	if (index < PhoneBook::nbContacts && this->contacts[index].isSet)
		return (&this->contacts[index]);
	return (NULL);

}

void	PhoneBook::searchContact() const {
	std::string	userInput;
	Contact	*contact;
	int	index;

	index = -1;
	this->putContacts();
	if (!this->contacts[0].isSet) {
		std::cout << "Phone Book empty" << std::endl;
		return ;
	}
	while ((contact = this->getSetContact(index)) == NULL
			&& userInput.compare("q")) {
		std::cout << "Index -> ";
		std::getline(std::cin, userInput);
		if (userInput.find_first_not_of("0123456789") == std::string::npos)
			index = std::atoi(userInput.data());
	}
	if (contact)
		contact->putContactInfo();
}

int	PhoneBook::getNbContacts() const {
	return (PhoneBook::nbContacts);
}

void	PhoneBook::startPhoneBook() {
	std::string	userInput;

	while (userInput.compare("EXIT"))
	{
		std::cout << "Phone Book -> ";
		std::getline(std::cin, userInput);
		switch (this->actions(userInput))
		{
			case(1) :
				this->addContact();
				break;
			case(2) :
				this->searchContact();
				break;
		}
	}
}
