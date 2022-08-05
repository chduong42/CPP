/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:22:42 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 17:10:48 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137) {
	std::cout << BGRN << "ShrubberyCreationForm Default Constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137, target) {
	std::cout << BGRN << "ShrubberyCreationForm Parametric Constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade(), src.getTarget()) {
	std::cout << BGRN << "ShrubberyCreationForm Copy Constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << BRED << "ShrubberyCreationForm Destructor called"<< RESET << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	if (this != &src)
	{
		this->setSignature(src.isSigned());
		this->setTarget(src.getTarget());
	}
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::ofstream	file;
	std::string		name_file = this->getTarget() + "_shrubbery";

	if (executor.executeForm(*this))
	{
		file.open(name_file.c_str());
		file << "^  ^  ^   ^      ___I_      ^  ^   ^  ^  ^   ^  ^\n";
		file << "/|\\/|\\/|\\ /|\\    /\\-_--\\    /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\\n";
		file << "/|\\/|\\/|\\ /|\\   /  \\_-__\\   /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\\n";
		file << "/|\\/|\\/|\\ /|\\   |[]| [] |   /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\\n";
	}
	else
		throw AForm::GradeTooLowException();
}
