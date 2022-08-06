/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:22:42 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 17:10:48 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(Intern const &src) {
	(void)src;
	std::cout << "Intern Copy Constructor called : but nothing is copied" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern Destructor called" << std::endl;
}

Intern& Intern::operator=(Intern const &src) {
	(void)src;
	return *this;
}

AForm*	Intern::makeForm(std::string form, std::string target) {
	const std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	
	while (form != forms[i] && i < 3)
		++i;
	switch (i) {
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "The intern didn't find the " << form << " form" << std::endl;
			throw Intern::FormExistException();
			return NULL;
	}

}