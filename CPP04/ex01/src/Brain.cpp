/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:52:03 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 20:47:14 by chduong          ###   ########.fr       */
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

Brain&	Brain::operator=(Brain const &src) {
	std::cout << "Brain's assignation operator called>" << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
         this->_ideas[i] = src._ideas[i];
    }
	return *this;
}

void	Brain::setIdeas(int nb_ideas)
{
	for (int i = 0; i < nb_ideas; i++)
	{
		std::getline(std::cin, this->_ideas[i]);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			exit(-1);
		}
	}
}

void	Brain::printIdeas() {
	std::cout << "Ideas in the Brain :" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i].empty())
			return;
		else
			std::cout << i << ". " << this->_ideas[i] << std::endl;
	}
}

void	Brain::deleteIdeas() {
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i].clear();
	}
}