/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:57:21 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/04 22:22:43 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class	ShrubberyCreationForm: public Form {

	public :

		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm(ShrubberyCreationForm &);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm	& operator=(ShrubberyCreationForm const &);

		std::string		getTarget() const;

		virtual void	exec(Bureaucrat const &) const;

	private :
	
		std::string	target;

	protected :

};

#endif

