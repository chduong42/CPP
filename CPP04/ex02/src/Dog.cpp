/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:40:04 by chduong           #+#    #+#             */
/*   Updated: 2022/08/03 18:13:06 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_brain = new Brain;
	return;
}

Dog::Dog(Dog const &src) : AAnimal(src._type), _brain(new Brain(*src._brain)) {
	std::cout << "Dog Copy Constructor called" << std::endl;
	return;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
	return;
}

Dog&    Dog::operator=(Dog const &src) {
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = src._brain;
	}
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << this->getType() << ": WOUAF !" << std::endl;
}

void	Dog::setIdeas(int nb_ideas) {
	this->_brain->setIdeas(nb_ideas);
}

void	Dog::printIdeas() const {
	this->_brain->printIdeas();
}

void	Dog::deleteIdeas() {
	this->_brain->deleteIdeas();
}