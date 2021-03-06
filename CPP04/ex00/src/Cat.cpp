/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:40:04 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 15:56:05 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat Default Constructor called" << std::endl;
	return;
}

Cat::Cat(Cat const &src) {
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	return;
}

Cat&    Cat::operator=(Cat const &src) {
	this->_type = src._type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << this->getType() << ": MEOOOW !" << std::endl;
}