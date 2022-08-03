/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/08/03 18:22:48 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal*		animals[4];
	
	std::cout << "======= TEST OF CONSTRUCTORS =======" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
		std::cout << std::endl;
	}
	std::cout << "======= TEST OF MakeSound =======" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << "======= TEST OF DESTRUCTORS =======" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	// std::cout << "======= CHECK AANIMAL IS ABSTRACT =======" << std::endl;
	// AAnimal		a;

	return 0;
}