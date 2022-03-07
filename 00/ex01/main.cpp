/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:18:09 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/23 21:28:49 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"
#include "ClassContact.hpp"

int	main()
{
	Contact		contacts[8];
	PhoneBook	phoneBook(contacts, 8);

	phoneBook.startPhoneBook();
	return (0);
}
