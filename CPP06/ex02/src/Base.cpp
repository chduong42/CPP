/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:09:52 by chduong           #+#    #+#             */
/*   Updated: 2022/08/10 19:15:54 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			return NULL;
	}
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Identified : A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified : B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified : C" << std::endl;
	else
		std::cerr << "Error: Non identified object" << std::endl;
	delete p;
}

void	identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "It's a ref of A-object"<< std::endl;
	}
	catch (std::exception e) {
		std::cerr << "It's not a ref of A-object:" << e.what() << std::endl;
	}
	
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "It's a ref of B-object" << std::endl;
	}
	catch (std::exception e) {
		std::cerr << "It's not a ref of B-object:" << e.what() << std::endl;
	}
	
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "It's a ref of C-object"<< std::endl;
	}
	catch (std::exception e) {
		std::cerr << "It's not a ref of C-object:" << e.what() << std::endl;
	}
	delete &p;
}