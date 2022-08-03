/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:34:08 by chduong           #+#    #+#             */
/*   Updated: 2022/07/27 17:35:39 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << "AAnimal Default Constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "AAnimal Parametric Constructor called: " << this->_type << " created" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const &src) {
	std::cout << "AAnimal Copy Constructor called" << std::endl;
	*this = src;
	return;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called : " << this->_type << " destroyed" << std::endl;
	return;
}

AAnimal&    AAnimal::operator=(AAnimal const &src) {
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string	AAnimal::getType(void) const {
	return this->_type;
}