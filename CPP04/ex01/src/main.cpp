/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:16 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 16:00:06 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

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
	
	return 0;
}