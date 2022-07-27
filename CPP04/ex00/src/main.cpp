/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/07/27 18:37:47 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "============= Animal Test ==============" << std::endl;
	const Animal* meta = new Animal();
	meta->makeSound();
	delete meta;
	
	std::cout << "\n============= Dog Test ==============" << std::endl;
	const Animal* j = new Dog();
	std::cout << "j is a " << j->getType() << std::endl;
	j->makeSound();
	delete j;
	
	std::cout << "\n============= Cat Test ==============" << std::endl;
	const Animal* i = new Cat();
	std::cout << "i is a " << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	delete i;

	std::cout << "\n============= WrongAnimal Test ==============" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	wmeta->makeSound();
	delete wmeta;
	
	std::cout << "\n============= WrongCat Test ==============" << std::endl;
	const WrongAnimal* w = new WrongCat();
	std::cout << "w is a " << w->getType() << std::endl;
	w->makeSound(); //will output the cat sound!
	delete w;
	
	return 0;
}