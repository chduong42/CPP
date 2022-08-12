/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:07:11 by chduong           #+#    #+#             */
/*   Updated: 2022/08/12 21:52:55 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _V(NULL), _N(0) {
	return;
}

Span::Span(uint N): _V(new int[N]), _N(N) {
	return;
}

Span::Span(Span const &src) : _V(NULL), _N(0) {
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
	
}