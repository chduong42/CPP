/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:07:11 by chduong           #+#    #+#             */
/*   Updated: 2022/08/12 21:17:25 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _tab(NULL), _N(0) {
	return;
}

Span::Span(uint N): _tab(new int[N]), _N(N) {
	return;
}

Span::Span(Span const &src) : _tab(NULL), _N(0) {
	*this = src;
}

Span&	Span::operator=(Span const &src)
{
	if (this != &src)
	{
		if (this->_tab)
			delete [] this->_tab;
		this->_tab = new int[src._N];
		this->_N = src._N;	
	}
	return *this;
}

Span::~Span() {
	return;
}

void	Span::addNumber(int val) {
	
}