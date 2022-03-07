/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:19:00 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/24 14:20:04 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	CLASSCONTACT_HPP
#define	CLASSCONTACT_HPP

#include <string>

class	Contact {
	public:
		
		Contact();
		~Contact();

		bool	 isSet;

		void	userFirstName();
		void	userLastName();
		void	userNickname();
		void	userPhoneNumber();
		void	userDarkestSecret();
		void	initContact();

		std::string	getFormFirstName() const;
		std::string	getFormLastName() const;
		std::string	getFormNickname() const;
		std::string	getFormPhoneNumber() const;
		std::string	getFormDarkestSecret() const;

		void	putContactInfo() const;

		private:

		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

};

#endif
