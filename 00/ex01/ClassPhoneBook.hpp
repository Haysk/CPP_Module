/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:32:45 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 13:50:51 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	CLASSPHONEBOOK_HPP
#define	CLASSPHONEBOOK_HPP

#include "ClassContact.hpp"

class	PhoneBook {
	public:

		PhoneBook(Contact *tabContacts, int lenContacts);
		~PhoneBook();

		Contact	*contacts;

		void	addContact();
		void	putContacts() const;
		void	searchContact() const;
		int		getNbContacts() const;
		Contact	*getSetContact(int index) const;
		void	startPhoneBook();

	private :

		int	nbContacts;

		int	actions(std::string action) const;
};

#endif
