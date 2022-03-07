/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:09:30 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/08 09:46:47 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int	data_, int data2_): data(data_), data2(data2_) {
}

Data::Data(Data & src): data(src.getData()), data2(src.getData2()) {
}

Data::~Data() {
}

Data	& Data::operator=(Data const & rhs) {
	this->data = rhs.getData();
	this->data2 = rhs.getData2();
	return (*this);
}

int		Data::getData(void) const {
	return (this->data);
}

int		Data::getData2(void) const {
	return (this->data);
}
