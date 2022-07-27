/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:40:04 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 15:56:05 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat Default Constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &src) {
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
	return;
}

WrongCat&    WrongCat::operator=(WrongCat const &src) {
	this->_type = src._type;
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << this->getType() << ": MIAOUUU !" << std::endl;
}