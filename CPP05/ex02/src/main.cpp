/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/08/06 19:05:43 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "\n================== Test Construction ====================" << std::endl;
	std::cout << "------------------ Shrubbery Creation Forms ------------------" << std::endl;
	AForm*			s1 = new ShrubberyCreationForm("Norminet");

	std::cout << "\n------------------ Robotomy Request Forms ------------------" << std::endl;
	AForm*			r1 = new RobotomyRequestForm("Bernadette");
	
	std::cout << "\n------------------ Presidential Pardon Forms ------------------" << std::endl;
	AForm*			p1 = new PresidentialPardonForm("Jipay");
	
	std::cout << "\n------------------ Bureaucrats ------------------" << std::endl;
	Bureaucrat		k("Kenny", 1);
	Bureaucrat		g("Garance", 150);

	std::cout << "\n================== Test on Shrubbery Creation Form ====================" << std::endl;
	std::cout << "------------------ Execution without Signature ------------------" << std::endl;
	try {
		s1->execute(k);
	}
	catch (AForm::RequirementException e)
	{
		e.printErr();
	}

	std::cout << "\n------------------ Signature ------------------" << std::endl;
	try {
		s1->beSigned(g);
	}
	catch (AForm::GradeTooLowException e)
	{
		e.printErr();
	}
	std::cout << std::endl << *s1 << std::endl;
	s1->beSigned(k);
	std::cout << *s1;

	std::cout << "\n------------------ Execution with Signature ------------------" << std::endl;
	try {
		s1->execute(g);
	}
	catch (AForm::RequirementException e)
	{
		e.printErr();
	}
	s1->execute(k);

	std::cout << "\n================== Test on Robotomy Request Form ====================" << std::endl;
	std::cout << "------------------ Execution without Signature ------------------" << std::endl;
	try {
		r1->execute(k);
	}
	catch (AForm::RequirementException e)
	{
		e.printErr();
	}

	std::cout << "\n------------------ Signature ------------------" << std::endl;
	try {
		r1->beSigned(g);
	}
	catch (AForm::GradeTooLowException e)
	{
		e.printErr();
	}
	std::cout << std::endl << *r1 << std::endl;
	r1->beSigned(k);
	std::cout << *r1;

	std::cout << "\n------------------ Execution with Signature ------------------" << std::endl;
	try {
		r1->execute(g);
	}
	catch (AForm::RequirementException e)
	{
		e.printErr();
	}
	r1->execute(k);

	std::cout << "\n================== Test on Presidential Pardon Form ====================" << std::endl;
	std::cout << "------------------ Execution without Signature ------------------" << std::endl;
	try {
		p1->execute(k);
	}
	catch (AForm::RequirementException e)
	{
		e.printErr();
	}

	std::cout << "\n------------------ Signature ------------------" << std::endl;
	try {
		p1->beSigned(g);
	}
	catch (AForm::GradeTooLowException e)
	{
		e.printErr();
	}
	std::cout << std::endl << *p1 << std::endl;
	p1->beSigned(k);
	std::cout << *p1;

	std::cout << "\n------------------ Execution with Signature ------------------" << std::endl;
	try {
		p1->execute(g);
	}
	catch (AForm::RequirementException e)
	{
		e.printErr();
	}
	p1->execute(k);
	
	std::cout << "\n================== Destruction ====================" << std::endl;
	delete s1;
	delete r1;
	delete p1;
	return 0;
}