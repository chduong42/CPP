/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:22:42 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 17:10:48 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45) {
	std::cout << BGRN << "RobotomyRequestForm Default Constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45, target) {
	std::cout << BGRN << "RobotomyRequestForm Parametric Constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade(), src.getTarget()) {
	std::cout << BGRN << "RobotomyRequestForm Copy Constructor called" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << BRED << "RobotomyRequestForm Destructor called"<< RESET << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	if (this != &src)
	{
		this->setSignature(src.isSigned());
		this->setTarget(src.getTarget());
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.executeForm(*this))
	{
		std::cout << "bzzzzzzzzzt bzzzzzzzzt (bruits de perceuse)" << std::endl;
		std::cout << this->getTarget() << "'s robotomisation ";
		srand(time(NULL));
		if (rand() % 2)
			std::cout << "succeed" << std::endl;
		else
			std::cout << "failed" << std::endl;
	}
	else
		throw AForm::RequirementException();
}
