/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 01:01:28 by chduong           #+#    #+#             */
/*   Updated: 2022/08/10 03:35:11 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	castFromChar(const char *str)
{
	char	c = static_cast<char>(*str);

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	castFromInt(const char *str)
{
	long int	l = strtol(str, NULL, 10);
	int			i = static_cast<int>(l);
	
	if (l < INT_MIN || l > INT_MAX)
	{
		printImpossible();
		return;
	}
	std::cout << "char: ";
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(i)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		
	std::cout << "int: ";
		std::cout << "impossible" << std::endl;

	
}

void	castFromFloat(const char *str)
{
	return;
}

void	castFromDouble(const char *str)
{
	return;
}
