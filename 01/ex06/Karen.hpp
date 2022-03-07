/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:04:38 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/26 19:45:36 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	KAREN_HPP
#define	KAREN_HPP

#include <iostream>

class	Karen {

	public :
		
		Karen();
		~Karen();

		void	complain(std::string level);

	private :

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif
