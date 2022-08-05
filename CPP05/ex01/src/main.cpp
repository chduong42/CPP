/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/08/05 16:22:42 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << BRED << "============ Test Too Low Grade to construct ============" << RESET << std::endl;
	try {
		Form f1("f1", 152, 120);      
	}
	catch (Form::GradeTooLowException e) {
		std::cout << "Form f1: ";
		e.printErr();
	}

	std::cout << BRED << "\n============ Test Too High Grade to construct ============" << RESET << std::endl;
	try {
		Form f2("f2", 10, 0);      
	}
	catch (Form::GradeTooHighException e) {
		std::cout << "Form f2: ";
		e.printErr();
	}

	std::cout << BGRN << "\n============ Test constructor OK ============" << RESET << std::endl;
	Bureaucrat		K("Kenny", 1);
	Bureaucrat		G("Garance", 100);
	Form			f3("Victoire", 50, 50);
	Form			f4(f3);

	std::cout << BGRN << "\n============ Test Accessors ============" << RESET << std::endl;
	std::cout << "Form f3's name is " << f3.getName() << ", need grade " << f3.getSignGrade();
	std::cout << " to be signed and grade " << f3.getExecGrade() << " to be exec, signature status: " << f3.isSigned() << std::endl;

	std::cout << BRED << "\n============ Test Signature of Forms ============" << RESET << std::endl;
	try {
		f3.beSigned(G);
	}
	catch (Form::GradeTooLowException e) {
		std::cout << "Garance tryed to sign the form : ";
		e.printErr();
	}
	f4.beSigned(K);

	std::cout << BYEL << "\n============ Test surcharge operateur d'insertion << ============" << RESET << std::endl;
	std::cout << f3 << std::endl;
	std::cout << f4 << std::endl;;
	
	return 0;
}