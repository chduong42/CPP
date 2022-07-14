/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:44:52 by chduong           #+#    #+#             */
/*   Updated: 2022/07/14 16:16:58 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nbits = 8;

//---------------------------- Constructors ----------
Fixed::Fixed() : _value(0) {
	return;
}

Fixed::Fixed(int const i) {
	this->_value = (i << Fixed::_nbits);
	return;
}

Fixed::Fixed(float const f) {
	this->_value = roundf(f * (1 << Fixed::_nbits));
	return;
}


//----------------------------- Copy Constructors ----------
Fixed::Fixed(Fixed const &src) {
	*this = src;
	return;
}


//----------------------------- Destructor ----------
Fixed::~Fixed() {
	return;
}


//----------------------------- Accesors ----------
int Fixed::getRawBits(void) const {
	return this->_value;
}

void    Fixed::setRawBits(int const raw) {
	this->_value = raw;
}


//----------------------------- Convertors ----------
int		Fixed::toInt(void) const {
	return (this->_value >> Fixed::_nbits);
}

float   Fixed::toFloat(void) const {
	return ((float)this->_value / (1 << Fixed::_nbits));
}


//----------------------------- Affectation Operators ----------
Fixed&	Fixed::operator=(Fixed const &src) {
	if (this != &src)
		this->_value = src.getRawBits();
	return *this;
}


//----------------------------- De/Incrementation Operators ----------

Fixed&	Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed&	Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;
	++*this;
	return tmp;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;
	--*this;
	return tmp;
}


//----------------------------- Arithmetic Operators ----------

Fixed	Fixed::operator+(Fixed const &src) const {
	return (this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const &src) const {
	return (this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const &src) const {
	return (this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const &src) const {
	return (this->toFloat() / src.toFloat());
}


//----------------------------- Comparaison Operators ----------

bool	Fixed::operator<(Fixed const &src) const {
	if (this->_value < src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(Fixed const &src) const {
	if (this->_value > src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const &src) const {
	if (this->_value <= src.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const &src) const {
	if (this->_value >= src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const &src) const {
	if (this->_value == src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const &src) const {
	if (this->_value != src.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::min(Fixed &a, Fixed &b) {
	if (a <= b)
		return a;
	else
		return b;
}

const Fixed	Fixed::min(const Fixed &a, const Fixed &b) {
	if (a <= b)
		return a;
	else
		return b;
}

Fixed	Fixed::max(Fixed &a, Fixed &b) {
	if (a >= b)
		return a;
	else
		return b;
}

const Fixed	Fixed::max(const Fixed &a, const Fixed &b) {
	if (a >= b)
		return a;
	else
		return b;
}

std::ostream& operator<<(std::ostream &flux, Fixed const &src)
{
	flux << src.toFloat();
	return flux;
}