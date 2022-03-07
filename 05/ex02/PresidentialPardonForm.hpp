/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:58:43 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/04 22:22:59 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class	PresidentialPardonForm: public Form {

	public :

		PresidentialPardonForm(std::string);
		PresidentialPardonForm(PresidentialPardonForm &);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm	& operator=(PresidentialPardonForm const &);

		std::string		getTarget() const;

		virtual void	exec(Bureaucrat const &) const;

	private :

		std::string	target;

	protected :

};

#endif

