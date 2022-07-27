/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/07/27 17:56:25 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal*		animals[4];
	
	std::cout << "======= TEST OF CONSTRUCTORS =======" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
		std::cout << std::endl;
	}
	std::cout << "======= TEST OF DESTRUCTORS =======" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	
	std::cout << "======= Test of Deep Copy =======" << std::endl;
	std::cout << "\n------------ Create a first dog -------------"<< std::endl; 
	Dog	j;
	std::cout << "\n------------ Set Ideas of first dog ------------"<< std::endl; 
	j.setIdeas(3);
	std::cout << "\nIdeas of first dog: "<< std::endl; 
	j.printIdeas();

	std::cout << "\n------------ Create a copy of first dog ------------"<< std::endl; 
	Dog i(j);
	std::cout << "\nIdeas of second dog, first'copy: "<< std::endl; 
	i.printIdeas();
	
	std::cout << "\n------------ Delete ideas of first dog ------------"<< std::endl; 
	j.deleteIdeas();
	std::cout << "\nIdeas of first dog: "<< std::endl; 
	j.printIdeas();
	std::cout << "\nIdeas of second dog: "<< std::endl; 
	i.printIdeas();
	
	std::cout << "\naddress of j : " << &j << std::endl; 
	std::cout << "address of i : " << &i << std::endl << std::endl;

	return 0;
}