/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:22:42 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 15:46:14 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150) {
    std::cout << "Default Constructor called : Bureaucrat " << this->_name << " with " this->_grade << " created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    std::cout << "Parametric Constructor called : Bureaucrat " << this->_name << " with " this->_grade << " created" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called : Bureaucrat " << _name << "with" _grade << std::endl;
}

std::ostream& operator<<(std::ostream &flux, Bureaucrat const &src)
{
    flux << src.getName() << ",bureaucrat grade " << src.getGrade() << ".";
    return flux;
}