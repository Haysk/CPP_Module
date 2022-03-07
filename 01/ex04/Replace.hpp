/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:33:09 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/26 18:02:32 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

class	Replace {
	
	public :

		Replace(std::string fileName_, std::string s1_, std::string s2_);
		~Replace();

		void	replace(std::string& line);
		void	writeReplaceFile();


	private :
		
		std::string	fileName;
		std::string	s1;
		std::string	s2;
};

#endif
