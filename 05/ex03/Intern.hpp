/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:53:59 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/04 23:26:30 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class	Intern {

	public :

		Intern();
		Intern(Intern &);
		~Intern();

		Intern	& operator=(Intern const &);

		Form	* makeForm(std::string const & formNameCreated, std::string const & target);

		class	CreateFormFailException: public std::exception {
			public :
				virtual const char	* what() const throw() {
					return ("Intern error : Form does not exist");
				}
		};

	private :

		

	protected :

};

std::ostream	& operator<<(std::ostream &, Intern &);

#endif

