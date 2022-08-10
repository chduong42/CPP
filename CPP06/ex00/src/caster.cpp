/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 01:01:28 by chduong           #+#    #+#             */
/*   Updated: 2022/08/10 15:28:03 by chduong          ###   ########.fr       */
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
	long long l = strtol(str, NULL, 10);
	
	if (errno == ERANGE || l < INT_MIN || l > INT_MAX)
	{
		printImpossible();
		return;
	}
	int			i = static_cast<int>(l);
	std::cout << "char: ";
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(i)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	castFromFloat(const char *str)
{
	double	d = strtod(str, NULL);

	if (errno == ERANGE || (!isinf(d) && (d < -FLT_MAX || d > FLT_MAX)))
	{
		printImpossible();
		return;
	}
	float	f = static_cast<float>(d);
	std::cout << "char: ";
	if (f < CHAR_MIN || f > CHAR_MAX || isnanf(f))
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
		
	std::cout << "int: ";
	if (d < INT_MIN || d > INT_MAX || isnanf(f))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
		
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
	return;
}

void	castFromDouble(const char *str)
{
	double	d = strtod(str, NULL);

	if (errno == ERANGE)
	{
		printImpossible();
		return;
	}
	std::cout << "char: ";
	if (d < CHAR_MIN || d > CHAR_MAX || isnan(d))
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(d)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	
	std::cout << "int: ";
	if (d < INT_MIN || d > INT_MAX || isnan(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
		
	std::cout << std::setprecision(1) << std::fixed << "float: ";
	if (!isinf(d) && (d < -FLT_MAX || d > FLT_MAX))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return;
}
