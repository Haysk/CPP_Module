/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConv.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 05:21:52 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/08 08:20:30 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConv.hpp"

ScalarConv::ScalarConv():
	typeInt(0),
	typeChar(0),
	typeFloat(0),
	typeDouble(0)
{
}

ScalarConv::ScalarConv(std::string const & src):
	typeInt(0),
	typeChar(0),
	typeFloat(0),
	typeDouble(0)
{
	this->convert(src, this->paramType(src));
}

ScalarConv::ScalarConv(ScalarConv const & src):
	typeInt(src.getInt()),
	typeChar(src.getChar()),
	typeFloat(src.getFloat()),
	typeDouble(src.getDouble())
{}

ScalarConv::~ScalarConv() {
}

int	ScalarConv::getInt() const {
	return (this->typeInt);
}

char	ScalarConv::getChar() const {
	return (this->typeChar);
}

float	ScalarConv::getFloat() const {
	return (this->typeFloat);
}

double	ScalarConv::getDouble() const {
	return (this->typeDouble);
}

ScalarConv	& ScalarConv::operator=(ScalarConv const & rhs) {
	this->typeInt = rhs.getInt();
	this->typeChar = rhs.getChar();
	this->typeFloat = rhs.getFloat();
	this->typeDouble = rhs.getDouble();
	return (*this);
}

void	ScalarConv::convert(std::string const	& param, int const index) {
	void	(ScalarConv::*funcPtr[4])(std::string const &) =
		{ &ScalarConv::convertInt, &ScalarConv::convertChar,
		&ScalarConv::convertFloat, &ScalarConv::convertDouble };
	if (index < 0)
		(this->*funcPtr[3])("nan");
	else
		(this->*funcPtr[index])(param);
}

int	ScalarConv::paramType(std::string const	& param) const {
	bool	(ScalarConv::*funcPtr[4])(std::string const &) const = 
		{ &ScalarConv::isInt, &ScalarConv::isChar, 
		&ScalarConv::isFloat, &ScalarConv::isDouble };
	for (int i = 0; i < 4; i++) {
		if ((this->*funcPtr[i])(param))
			return (i);
	}
	return (-1);
}

bool	ScalarConv::isInt(std::string const & param) const {
	std::size_t	found;

	found = 0;
	if (param[0] == '-')
		found++;
	return (param.find_first_not_of("0123456789", found) == std::string::npos);
}

bool	ScalarConv::isChar(std::string const & param) const {
	return (param.length() == 1);
}

bool	ScalarConv::isFloat(std::string const & param) const {
	std::size_t	found;

	if (!param.compare("nanf") || !param.compare("-inff") || !param.compare("+inff"))
		return (true);
	found = 0;
	if (param[0] == '-')
		found++;
	found = param.find_first_not_of("0123456789", found);
	if (param[found] == '.')
		found++;
	found = param.find_first_not_of("0123456789", found);
	return (param[found] == 'f' && found == param.length() - 1);
}

bool	ScalarConv::isDouble(std::string const & param) const {
	std::size_t	found;

	if (!param.compare("nan") || !param.compare("-inf") || !param.compare("+inf"))
		return (true);
	found = 0;
	if (param[0] == '-')
		found++;
	found = param.find_first_not_of("0123456789", found);
	if (param[found] != '.')
		return (false);
	return (param.find_first_not_of("0123456789", ++found) == std::string::npos);
}

void	ScalarConv::convertInt(std::string const & param) {
	std::stringstream	strs;
	
	strs << param;
	strs >> this->typeInt;
	this->typeChar = static_cast<char>(this->typeInt);
	this->typeFloat = atof(param.c_str());
	this->typeDouble = static_cast<double>(atof(param.c_str()));
}

void	ScalarConv::convertChar(std::string const & param) {
	this->typeChar = param[0];
	this->typeInt = static_cast<int>(this->typeChar);
	this->typeFloat = static_cast<float>(this->typeChar);
	this->typeDouble = static_cast<double>(this->typeChar);
}

void	ScalarConv::convertFloat(std::string const & param) {
	this->typeFloat = atof(param.c_str());
	this->typeInt = static_cast<int>(this->typeFloat);
	this->typeChar = static_cast<char>(this->typeFloat);
	this->typeDouble = static_cast<double>(this->typeFloat);
}

void	ScalarConv::convertDouble(std::string const & param) {
	this->typeDouble = static_cast<double>(atof(param.c_str()));
	this->typeInt = static_cast<int>(this->typeDouble);
	this->typeChar = static_cast<char>(this->typeDouble);
	this->typeFloat = static_cast<float>(this->typeDouble);
}

std::ostream	& operator<<(std::ostream & lhs, ScalarConv const &rhs) {
	lhs << "char: ";
	if (rhs.getInt() < 0 || rhs.getInt() > 127 || std::isnan(rhs.getFloat()))
		lhs << "impossible";
	else if (rhs.getChar() >= 0 && (rhs.getChar() > 126 || rhs.getChar() < 33))
		lhs << "Non displayable";
	else {
		lhs << "'" << rhs.getChar() << "'";
	}
	lhs << std::endl;
	lhs << "int: ";
	if (rhs.getFloat() > static_cast<float>(INT_MAX)
			|| rhs.getFloat() < INT_MIN || std::isnan(rhs.getFloat()))
		lhs << "impossible";
	else
		lhs << rhs.getInt();
	lhs << std::endl;
	lhs << std::fixed << std::setprecision(1);
		lhs << "float: " << rhs.getFloat() << "f" << std::endl;
	lhs << "double: " << rhs.getDouble() << std::endl;
	return (lhs);
}
