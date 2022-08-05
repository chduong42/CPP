/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:22:42 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 17:10:48 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("White Paper"), _signed(false), _sign_grade(150), _exec_grade(150) {
	std::cout << BGRN << "AForm Default Constructor called : " << this->_name << " created, need grade 150 to be signed and exec" << RESET << std::endl;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) :
_name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade) {
	if (this->_sign_grade > 150 || this->_exec_grade > 150)
		throw AForm::GradeTooLowException();
	else if (this->_sign_grade < 1 || this->_exec_grade < 1)
		throw AForm::GradeTooHighException();
	else
	{
		std::cout << BGRN << "AForm Parametric Constructor called : " << _name << " created, need grade ";
		std::cout << _sign_grade << " to be signed and grade " << _exec_grade << " to be exec" << RESET << std::endl;
	}
}

AForm::AForm(std::string name, int sign_grade, int exec_grade, std::string target) :
_name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade), _target(target) {
	if (this->_sign_grade > 150 || this->_exec_grade > 150)
		throw AForm::GradeTooLowException();
	else if (this->_sign_grade < 1 || this->_exec_grade < 1)
		throw AForm::GradeTooHighException();
	else
	{
		std::cout << BGRN << "AForm Parametric Constructor called : " << _name << " created, need grade ";
		std::cout << _sign_grade << " to be signed and grade " << _exec_grade << " to be exec, is for " << _target << RESET << std::endl;
	}
}

AForm::AForm(AForm const &src) : _name(src._name), _signed(src._signed), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade) {
	std::cout << BGRN << "AForm Copy Constructor called : " << this->_name << " copied 🖨️" << RESET << std::endl;
}

AForm::~AForm() {
	std::cout << BRED << "AForm Destructor called : " << this->_name << " burned 🔥" << RESET << std::endl;
}

AForm& AForm::operator=(AForm const &src) {
	if (this != &src)
	{
		this->_signed = src._signed;
	}
	return *this;
}

std::string AForm::getName() const {
	return this->_name;
}

std::string AForm::getTarget() const {
	return this->_target;
}

bool	AForm::isSigned() const {
	return this->_signed;
}

int AForm::getSignGrade() const {
	return this->_sign_grade;
}

int AForm::getExecGrade() const {
	return this->_exec_grade;
}

void AForm::setSignature(bool status) {
	this->_signed = status;
}

void AForm::setTarget(std::string target) {
	this->_target = target;
}

void	AForm::beSigned(Bureaucrat &br) {
	if (this->_sign_grade >= br.getGrade())
	{
		this->_signed = true;
		br.signForm(*this);
	}
	else
	{
		br.signForm(*this);
		throw AForm::GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream &flux, AForm const &src)
{
	flux << "Form: "<< src.getName() << std::endl;
	flux << "Signed: " << src.isSigned() << std::endl;
	flux << "Grade to sign: " << src.getSignGrade() << std::endl;
	flux << "Grade to exec: " << src.getExecGrade() << std::endl;
	flux << "Target: " << src.getTarget() << std::endl;
	return flux;
}