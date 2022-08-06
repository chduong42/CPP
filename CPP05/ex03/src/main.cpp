/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/08/06 19:26:33 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cerr << "Usage: ./Intern <FormName> <FormTarget>" << std::endl;
		std::cerr << "Form Name: \n-shrubbery creation\n-robotomy request\n-presidential pardon" << std::endl;
		return 1;
	}
	
	std::cout << "\n================== Test Construction ====================" << std::endl;
	Bureaucrat		k("Kenny", 1);
	Bureaucrat		g("Garance", 150);
	Intern			john;
	AForm*			form;

	std::cout << "\n================== Intern create the Form ====================" << std::endl;
	try {
		form = john.makeForm(av[1], av[2]);
	}
	catch (Intern::FormExistException e)
	{
		e.printErr();
	}

	if (!form)
		return 1;
		
	std::cout << "\n================== Test on Form ====================" << std::endl;
	std::cout << "------------------ Execution without Signature ------------------" << std::endl;
	try {
		form->execute(k);
	}
	catch (AForm::RequirementException e)
	{
		e.printErr();
	}

	std::cout << "\n------------------ Signature ------------------" << std::endl;
	try {
		form->beSigned(g);
	}
	catch (AForm::GradeTooLowException e)
	{
		e.printErr();
	}
	std::cout << std::endl << *form << std::endl;
	form->beSigned(k);
	std::cout << *form;

	std::cout << "\n------------------ Execution with Signature ------------------" << std::endl;
	try {
		form->execute(g);
	}
	catch (AForm::RequirementException e)
	{
		e.printErr();
	}
	form->execute(k);
	
	std::cout << "\n================== Destruction ====================" << std::endl;
	delete form;
	return 0;
}