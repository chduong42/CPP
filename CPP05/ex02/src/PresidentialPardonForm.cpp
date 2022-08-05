/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:22:42 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 17:10:48 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5) {
	std::cout << BGRN << "PresidentialPardonForm Default Constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5, target) {
	std::cout << BGRN << "PresidentialPardonForm Parametric Constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade(), src.getTarget()) {
	std::cout << BGRN << "PresidentialPardonForm Copy Constructor called" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << BRED << "PresidentialPardonForm Destructor called"<< RESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	if (this != &src)
	{
		this->setSignature(src.isSigned());
		this->setTarget(src.getTarget());
	}
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.executeForm(*this))
		std::cout << this->getTarget() << "has been forgiven by Zaphod Beeblebrox" << std::endl;
	else
		throw AForm::GradeTooLowException();
}
