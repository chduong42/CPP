/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 21:17:41 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal*		animals[6];
	
	std::cout << "======= TEST OF CONSTRUCTORS =======" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
		std::cout << std::endl;
	}
	std::cout << "======= TEST OF DESTRUCTORS =======" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	
	std::cout << "======= Test of Deep Copy =======" << std::endl;
	Brain		brain1;
	brain1.setIdeas(3);
	brain1.printIdeas();
	
	Brain		brain2(brain1);
	
	return 0;
}