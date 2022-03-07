/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:54:13 by adylewsk          #+#    #+#             */
/*   Updated: 2022/02/11 22:12:10 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	this->vec.reserve(0);
}

Span::Span(unsigned int  N) {
	this->vec.reserve(N);

}

Span::Span(Span const & src) {
	this->vec = src.getVec();
}

Span::~Span() {
}

Span	& Span::operator=(Span const & cp) {
	this->vec = cp.getVec();
	return (*this);
}

std::vector<int>	Span::getVec() const {
	return (this->vec);
}

void	Span::addNumber(int add) {
	if (this->vec.size() > this->vec.capacity())
		throw (std::exception());
	this->vec.push_back(add);
}

void	Span::addRangeNumber(std::vector<int> range) {
	std::vector<int>::iterator it;
	int i;

	if (range.size() == 0)
		return;
	for (i = 0, it = range.begin(); it != range.end(); it++, i++);
	if ((this->vec.size() + i) > this->vec.capacity())
		throw (std::exception());
	this->vec.insert(this->vec.end(), range.begin(), range.end());

}
int	Span::longestSpan() {
	if (this->vec.size() < 2)
		throw (std::exception());
	return (*std::max_element(this->vec.begin(), this->vec.end()) - *std::min_element(this->vec.begin(), this->vec.end()));
}

int	Span::shortestSpan() {
	int	diff;

	if (this->vec.size() < 2)
		throw (std::exception());
	std::sort(this->vec.begin(), this->vec.end());
	diff = *(this->vec.begin() + 1) - *this->vec.begin(); 
	for(std::vector<int>::iterator it = this->vec.begin(); it != this->vec.end() - 1; it++) {
		if (diff > (*(it + 1) - *it))
			diff = *(it + 1) - *it;
	}
	return (diff);
}
