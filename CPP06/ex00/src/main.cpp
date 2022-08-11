/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:27:56 by chduong           #+#    #+#             */
/*   Updated: 2022/08/10 15:30:59 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void    printImpossible(void)
{
	std::cout
	<< "char: impossible" << std::endl
	<< "int: impossible" << std::endl
	<< "float: impossible" << std::endl
	<< "double: imposible" << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: wrong usage" << std::endl;
		std::cerr << "Usage: ./convert <char/int/float/double>" << std::endl;
		return EXIT_FAILURE;
	}
	if (isChar(av[1]))
		castFromChar(av[1]);
	else if (isInt(av[1]))
		castFromInt(av[1]);
	else if (isFloat(av[1]))
		castFromFloat(av[1]);
	else if (isDouble(av[1]))
		castFromDouble(av[1]);
	else {
		printImpossible();
	}
	return EXIT_SUCCESS;
}