/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 17:37:36 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colors.hpp"

int main()
{
	std::cout << BRED << "============ Test Too High Grade to construct ============" << RESET << std::endl;
	try {
		Bureaucrat Eric("Eric", 160);
	}
	catch (Bureaucrat::GradeTooLowException e) {
		std::cout << "Eric constructor : ";
		e.printErr();
	}

	std::cout << BRED << "\n============ Test Too Low Grade to construct ============" << RESET << std::endl;
	try {
		Bureaucrat Garance("Garance", 0);
	}
	catch (Bureaucrat::GradeTooHighException e) {
		std::cout << "Garance constructor : ";
		e.printErr();
	}

	std::cout << BGRN << "\n============ Test constructor OK ============" << RESET << std::endl;
	Bureaucrat K("Kenny", 2);
	Bureaucrat Max("Max", 149);


	std::cout << BGRN << "\n============ Test Accessors ============" << RESET << std::endl;
	std::cout << "K's name is " << K.getName() << " and his grade is " << K.getGrade() << std::endl;


	std::cout << BRED << "\n============ Test Too High Grade to upGrade ============" << RESET << std::endl;
	try {
		K.upGrade();
		K.upGrade();
	}
	catch (Bureaucrat::GradeTooHighException e) {
		std::cout << "Kenny upgrade : ";
		e.printErr();
	}

	std::cout << BRED << "\n============ Test Too Low Grade to downGrade ============" << RESET << std::endl;
	try {
		Max.downGrade();
		Max.downGrade();
	}
	catch (Bureaucrat::GradeTooLowException e) {
		std::cout << "Max downgrade : ";
		e.printErr();
	}

	std::cout << BYEL << "\n============ Test surcharge operateur d'insertion << ============" << RESET << std::endl;
	std::cout << K << std::endl;
	std::cout << Max << std::endl << std::endl;
	
	return 0;
}