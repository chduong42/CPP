/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/08/05 23:47:02 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	ShrubberyCreationForm		sForm("Norminet");
	RobotomyRequestForm			rForm("Bernadette");
	PresidentialPardonForm		pForm("Jipay");
	Bureaucrat					e("Enora", 1);
	Bureaucrat					k("Kenny", 40);
	Bureaucrat					g("Garance", 140);

	std::cout << "================== Test signature ====================" << std::endl;
	
	std::cout << "================== Test execution ====================" << std::endl;
	
	std::cout << "================== Test execution sans signature ====================" << std::endl;

	std::cout << "================== Test execution sans signature ====================" << std::endl;

	
	
	
	return 0;
}