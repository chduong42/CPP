/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:07:11 by chduong           #+#    #+#             */
/*   Updated: 2022/08/13 14:12:13 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0) {
	return;
}

Span::Span(uint N): _N(N) {
	return;
}

Span::Span(Span const &src) {
	*this = src;
}

Span&	Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_V = src._V;
		this->_N = src._N;	
	}
	return *this;
}

Span::~Span() {
	return;
}

void	Span::addNumber(int val) {
	if (this->_V.size() < this->_N)
		this->_V.push_back(val);
	else
		throw Span::TooManyException();
}

void	Span::addPlageNumber(uint plage) {
	srand(time(NULL));
	for (uint i=0; i < plage; i++)
		this->addNumber(rand());
}

int	Span::shortestSpan() const {
	int									a, b, ret=INT_MAX;
	std::vector<int>					tmp(_V);
	std::vector<int>::const_iterator	it;
	
	if (this->_N < 2)
		throw Span::NoSpanException();
	std::sort(tmp.begin(), tmp.end());
	it = tmp.begin();
	while (it != tmp.end())
	{
		a = *it;
		if (++it != tmp.end())
		{
			b = *it;
			if (b - a < ret)
				ret = b - a;	
		}
	}
	return ret;
}

int	Span::longestSpan() const {
	if (this->_N < 2)
		throw Span::NoSpanException();
	return (*std::max_element(_V.begin(), _V.end()) - *std::min_element(_V.begin(), _V.end()));
}

void	Span::printNumber() const {
	std::cout << "Span numbers:";
	for (std::vector<int>::const_iterator it=this->_V.begin(); it!=this->_V.end(); ++it)
  		std::cout << ' ' << *it;
	std::cout << '\n';
}