/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 08:29:00 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/03 08:29:01 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

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

	private :

		Bureaucrat(void);
		std::string const	name;
		unsigned int		grade;

	protected :

	public :
		class	GradeTooHighException: public std::exception {
			public :
				virtual const char	* what() const throw() {
					return ("Grade to High !!");
				}
		
		};

		class	GradeTooLowException: public std::exception {
			public :
				virtual const char	* what() const throw() {
					return ("Grade to Low !!");
				}
		
		};
};

std::ostream	& operator<<(std::ostream &, Bureaucrat &);

#endif
