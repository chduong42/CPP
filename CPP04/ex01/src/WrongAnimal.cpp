/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:34:08 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 15:57:38 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal Parametric Constructor called: " << this->_type << " created" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called : " << this->_type << " destroyed" << std::endl;
	return;
}

WrongAnimal&    WrongAnimal::operator=(WrongAnimal const &src) {
	this->_type = src._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const {
	return this->_type;
}

void		WrongAnimal::makeSound(void) const {
	std::cout << this->getType() << ": AHAHAH" << std::endl;
}