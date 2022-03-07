/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:19:02 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 14:47:09 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClassContact.hpp"
#include <iostream>

Contact::Contact(): isSet(false) {
}

Contact::~Contact() {
}

void	Contact::userFirstName() {
	std::string userInput;
	while (userInput.find_first_not_of(' ') == std::string::npos) {
		std::cout << "First Name : ";
		std::getline(std::cin, userInput);
	}
	this->firstName = userInput;
}

void	Contact::userLastName() {
	std::string userInput;
	while (userInput.find_first_not_of(' ') == std::string::npos) {
		std::cout << "Last Name : ";
		std::getline(std::cin, userInput);
	}
	this->lastName = userInput;
}

void	Contact::userNickname() {
	std::string userInput;
	while (userInput.find_first_not_of(' ') == std::string::npos) {
		std::cout << "Nickname : ";
		std::getline(std::cin, userInput);
	}
	this->nickname = userInput;
}

void	Contact::userPhoneNumber() {
	std::string userInput;
	while (userInput.find_first_not_of(' ') == std::string::npos) {
		std::cout << "Phone Number : ";
		std::getline(std::cin, userInput);
	}
	this->phoneNumber = userInput;
}

void	Contact::userDarkestSecret() {
	std::string userInput;
	while (userInput.find_first_not_of(' ') == std::string::npos) {
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, userInput);
	}
	this->darkestSecret = userInput;
}

std::string	Contact::getFormFirstName() const {
	if (Contact::firstName.length() <= 10)
		return (Contact::firstName);
	return (Contact::firstName.substr(0, 9) + '.');
}

std::string	Contact::getFormLastName() const {
	if (Contact::lastName.length() <= 10)
		return (Contact::lastName);
	return (Contact::lastName.substr(0, 9) + '.');
}

std::string	Contact::getFormNickname() const {
	if (Contact::nickname.length() <= 10)
		return (Contact::nickname);
	return (Contact::nickname.substr(0, 9) + '.');
}

std::string	Contact::getFormPhoneNumber() const {
	if (Contact::phoneNumber.length() <= 10)
		return (Contact::phoneNumber);
	return (Contact::phoneNumber.substr(0, 9) + '.');
}

std::string	Contact::getFormDarkestSecret() const {
	if (Contact::darkestSecret.length() <= 10)
		return (Contact::darkestSecret);
	return (Contact::darkestSecret.substr(0, 9) + '.');
}

void	Contact::putContactInfo() const {
	if (!this->isSet)
		return ;
	std::cout << "First Name : " << Contact::firstName << std::endl;
	std::cout << "Last Name : " << Contact::lastName << std::endl;
	std::cout << "Nickname : " << Contact::nickname << std::endl;
	std::cout << "Phone Number : " << Contact::phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << Contact::darkestSecret << std::endl;
}

void	Contact::initContact() {
	this->userFirstName();
	this->userLastName();
	this->userNickname();
	this->userPhoneNumber();
	this->userDarkestSecret();
	this->isSet = true;
}
