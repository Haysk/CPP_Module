/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:40:58 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 23:46:23 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class	Bureaucrat {

	public :

		Bureaucrat(std::string, unsigned int);
		Bureaucrat(Bureaucrat &);
		~Bureaucrat(void);

		Bureaucrat	& operator=(Bureaucrat const &);

		std::string		getName(void) const;
		unsigned int	getGrade(void) const;

		void			upGrade(unsigned int);
		void			downGrade(unsigned int);

		void			signForm(Form &);

	private :

		Bureaucrat(void);
		std::string const	name;
		unsigned int		grade;

	protected :

	public :
		class	GradeTooHighException: public std::exception {
			public :
				virtual const char	* what() const throw() {
					return ("Error Bureaucrat: Grade to High !!");
				}
		
		};

		class	GradeTooLowException: public std::exception {
			public :
				virtual const char	* what() const throw() {
					return ("Error Bureaucrat: Grade to Low !!");
				}
		
		};
};

std::ostream	& operator<<(std::ostream &, Bureaucrat &);

#endif
