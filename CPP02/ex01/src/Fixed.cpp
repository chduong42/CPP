/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:44:52 by chduong           #+#    #+#             */
/*   Updated: 2022/07/12 16:56:11 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nbits = 8;

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const i) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = i << Fixed::_nbits;
    return;
}

Fixed::Fixed(float const f) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(f * (1 << Fixed::_nbits));
    return;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed& Fixed::operator=(Fixed const &src) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->_value = src.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return this->_value;
}

void    Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

int Fixed::toInt(void) const {
    return (this->_value >> Fixed::_nbits);
}

float   Fixed::toFloat(void) const {
    return ((float)this->_value / (1 << Fixed::_nbits));
}

std::ostream& operator<<(std::ostream &flux, Fixed const &src)
{
    flux << src.toFloat();
    return flux;
}