/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:05:49 by chduong           #+#    #+#             */
/*   Updated: 2022/08/12 19:43:58 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void ) {
	std::list<int>		lst;
	lst.push_back(1);
	lst.push_back(5);
	lst.push_back(8);
	lst.push_back(10);
	std::cout << "easyfind: " << easyfind(lst, 5) << std::endl;
	try {
		std::cout << "easyfind: " << easyfind(lst, 6) << std::endl;
	}
	catch (NotFoundException e)
	{
		e.printWhat();
	}
	
	std::vector<int>	vect;
	vect.push_back(0);
	vect.push_back(2);
	vect.push_back(6);
	vect.push_back(9);
	std::cout << "easyfind: " << easyfind(vect, 6) << std::endl;
	try {
		std::cout << "easyfind: " << easyfind(vect, 4545) << std::endl;
	}
	catch (NotFoundException e)
	{
		e.printWhat();
	}
	
	std::deque<int>		deq;
	deq.push_back(-1);
	deq.push_back(42);
	deq.push_back(866);
	deq.push_back(-24);
	std::cout << "easyfind: " << easyfind(deq, -24) << std::endl;
	try {
		std::cout << "easyfind: " << easyfind(deq, -54) << std::endl;
	}
	catch (NotFoundException e)
	{
		e.printWhat();
	}
	
	return 0;
}
