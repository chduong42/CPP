/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:34:08 by chduong           #+#    #+#             */
/*   Updated: 2022/07/22 18:23:13 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("None") {
	std::cout << "Animal Default Constructor called" << std::endl;
	return;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal Parametric Constructor called: " << this->_type << " created" << std::endl;
	return;
}

Animal::Animal(Animal const &src) {
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called : " << this->_type << " destroyed" << std::endl;
	return;
}

Animal&    Animal::operator=(Animal const &src) {
	this->_type = src._type;
	return *this;
}

std::string	Animal::getType(void) const {
	return this->_type;
}

void		Animal::makeSound(void) const {
	std::cout << "Animal Sound : ?" << std::endl;
}