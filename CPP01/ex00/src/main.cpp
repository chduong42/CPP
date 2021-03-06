/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:25:42 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/01 15:59:29 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	stackZombie = Zombie("Stacky");
	stackZombie.announce();
	std::cout << std::endl << std::endl;
	
	Zombie*	heapZombie = newZombie("Heaper");
	heapZombie->announce();
	std::cout << std::endl << std::endl;
	
	randomChump("Randy");
	std::cout << std::endl << std::endl;
	
	delete heapZombie;
	return 0;
}