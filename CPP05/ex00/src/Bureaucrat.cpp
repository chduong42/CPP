/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:22:42 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 17:10:48 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150) {
	std::cout << "Bureaucrat Default Constructor called : " << this->_name << " with grade " << this->_grade << " created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		std::cout << "Bureaucrat Parametric Constructor called : " << this->_name << " with grade " << this->_grade << " created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade) {
	std::cout << "Bureaucrat Copy Constructor called : " << this->_name<< " with grade " << this->_grade << " cloned" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Destructor called : " << this->_name << " with grade " << this->_grade << " destroyed" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &src) {
	if (this != &src)
		this->_grade = src._grade;
	return *this;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void    Bureaucrat::upGrade() {
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade--;
		std::cout << this->_name << " has upgraded to " << this->_grade << std::endl;
	}
}

void    Bureaucrat::downGrade() {
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade++;
		std::cout << this->_name << " has downgraded to " << this->_grade << std::endl;
	}
}

std::ostream& operator<<(std::ostream &flux, Bureaucrat const &src)
{
	flux << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return flux;
}