/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:40:04 by chduong           #+#    #+#             */
/*   Updated: 2022/07/22 17:57:54 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog Default Constructor called" << std::endl;
	return;
}

Dog::Dog(Dog const &src) {
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	return;
}

Dog&    Dog::operator=(Dog const &src) {
	this->_type = src._type;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << this->getType() << "'s sound: WOUAF !" << std::endl;
}