/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:40:04 by chduong           #+#    #+#             */
/*   Updated: 2022/07/27 17:45:14 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_brain = new Brain;
	return;
}

Cat::Cat(Cat const &src) : Animal(src._type), _brain(new Brain(*src._brain)) {
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
	return;
}

Cat&    Cat::operator=(Cat const &src) {
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = src._brain;
	}
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << this->getType() << ": MEOOOW !" << std::endl;
}

void	Cat::setIdeas(int nb_ideas) {
	this->_brain->setIdeas(nb_ideas);
}

void	Cat::printIdeas() const {
	this->_brain->printIdeas();
}

void	Cat::deleteIdeas() {
	this->_brain->deleteIdeas();
}