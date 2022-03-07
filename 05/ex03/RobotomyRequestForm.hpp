/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:57:52 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/04 22:22:51 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class	RobotomyRequestForm : public Form {

	public :

		RobotomyRequestForm(std::string);
		RobotomyRequestForm(RobotomyRequestForm &);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm	& operator=(RobotomyRequestForm const &);

		std::string		getTarget() const;

		virtual void	exec(Bureaucrat const &) const;

	private :

		std::string	target;

	protected :

};

#endif

