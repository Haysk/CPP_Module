/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 08:29:32 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 23:41:06 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {

	public :

		Form(std::string, unsigned int, unsigned int);
		Form(Form &);
		~Form(void);

		Form			& operator=(Form const &);

		std::string		getName(void) const;
		bool			getIsSigned(void) const;
		unsigned int	getSign(void) const;
		unsigned int	getExecute(void) const;

		void			beSigned(Bureaucrat	&);

	private :

		Form(void);
		std::string			name;
		bool				isSigned;
		unsigned int const	sign;
		unsigned int const	execute;

	protected :
	
	public :
		class	GradeTooHighException: public std::exception {
			public :
				virtual const char	* what() const throw() {
					return ("Error Form: Grade to High !!");
				}
		
		};

		class	GradeTooLowException: public std::exception {
			public :
				virtual const char	* what() const throw() {
					return ("Error Form: Grade to Low !!");
				}
		
		};
};

std::ostream	& operator<<(std::ostream &, Form &);

#endif

