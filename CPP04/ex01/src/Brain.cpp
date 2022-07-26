/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:52:03 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 16:56:26 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor called" << std::endl;
	return;
}

Brain::Brain(Brain const &src) {
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
	return;
}

Brain&    Brain::operator=(Brain const &src) {
	*this->_ideas = *src._ideas;
	return *this;
}