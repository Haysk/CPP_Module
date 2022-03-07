/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:33:16 by adylewsk          #+#    #+#             */
/*   Updated: 2022/01/26 17:54:02 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string fileName_, std::string s1_, std::string s2_):
	fileName(fileName_),
	s1(s1_),
	s2(s2_) {}

	Replace::~Replace() {}

	void	Replace::replace(std::string& line) {
		size_t	i;

		i = line.find(this->s1);
		while (i != std::string::npos) {
			line.erase(i, this->s1.size());
			line.insert(i, this->s2);
			i = line.find(this->s1);
		}
	}

void	Replace::writeReplaceFile () {
	std::ifstream	file;
	std::ofstream	fileReplaced;
	std::string		fileNameReplace;
	std::string		line;

	fileNameReplace = this->fileName + ".replace";
	file.open(this->fileName.data());
	fileReplaced.open(fileNameReplace.data());
	if (!file.is_open() || !fileReplaced.is_open()) {
		std::cout << "file cannot be openned" << std::endl;
		return ;
	}
	while (!file.eof()) {
		std::getline(file, line);
		if (this->s1.compare(this->s2))
			this->replace(line);
		fileReplaced << line;
		if (!file.eof())
			fileReplaced << std::endl;
	}
	file.close();
	fileReplaced.close();
}
