/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:25:42 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/01 16:18:47 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "Invocation de zombies John !" << std::endl;
	Zombie *horde = zombieHorde(4, "John");
	
	std::cout << "\nEn avant !" << std::endl;
	for(int i = 0; i < 4; i++)
		horde[i].announce();

	std::cout << "\nRetournez dans vos tombes !" << std::endl;
	delete [] horde;
	return 0;
}