/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:22:42 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 17:10:48 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("White Paper"), _signed(false), _sign_grade(150), _exec_grade(150) {
	std::cout << BGRN << "Form Default Constructor called : " << this->_name << " unsigned, need grade 150 to be signed and exec" << RESET << std::endl;
}

Form::Form(std::string name, int sign_grade, int exec_grade) :
_name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade) {
	if (this->_sign_grade > 150 || this->_exec_grade > 150)
		throw Form::GradeTooLowException();
	else if (this->_sign_grade < 1 || this->_exec_grade < 1)
		throw Form::GradeTooHighException();
	else
	{
		std::cout << BGRN << "Form Parametric Constructor called : " << this->_name << " unsigned, need grade ";
		std::cout << this->_sign_grade << " to be signed and grade " << this->_exec_grade << " to be exec" << RESET << std::endl;
	}
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade) {
	std::cout << BGRN << "Form Copy Constructor called : " << this->_name << " copied 🖨️" << RESET << std::endl;
}

Form::~Form() {
	std::cout << BRED << "Form Destructor called : " << this->_name << " burned 🔥" << RESET << std::endl;
}

Form& Form::operator=(Form const &src) {
	if (this != &src)
	{
		this->_signed = src._signed;
	}
	return *this;
}

std::string Form::getName() const {
	return this->_name;
}

bool	Form::isSigned() const {
	return this->_signed;
}

int Form::getSignGrade() const {
	return this->_sign_grade;
}

int Form::getExecGrade() const {
	return this->_exec_grade;
}

void	Form::beSigned(Bureaucrat &br) {
	if (this->_sign_grade >= br.getGrade())
	{
		this->_signed = true;
		br.signForm(*this);
	}
	else
	{
		br.signForm(*this);
		throw Form::GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream &flux, Form const &src)
{
	flux << "Form: "<< src.getName() << std::endl;
	flux << "Signed: " << src.isSigned() << std::endl;
	flux << "Grade to sign: " << src.getSignGrade() << std::endl;
	flux << "Grade to exec: " << src.getExecGrade() << std::endl;
	return flux;
}