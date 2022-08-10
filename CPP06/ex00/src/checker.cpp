/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 01:01:09 by chduong           #+#    #+#             */
/*   Updated: 2022/08/10 15:18:18 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool    isChar(const char *str)
{
	if (str[0] && !str[1] && !isdigit(str[0]))
		return true;
	return false;
}

bool    isInt(const char *str)
{
	if (!*str)
		return (false);
	while (isspace(*str))
		++str;
	if (*str == '+' || *str == '-')
		++str;
	while (isdigit(*str))
		++str;
	if (*str)
		return false;
	return true;
}

bool    isFloat(const char *str)
{
	if (!*str)
		return (false);
	while (isspace(*str))
		++str;
	if (!strcmp(str, "nanf"))
		return true;
	if (*str == '+' || *str == '-')
		++str;
	if (!strcmp(str, "inff"))
		return true;
	while (isdigit(*str))
		++str;
	if (*str == '.')
		++str;
	while (isdigit(*str))
		++str;
	if (*str != 'f' || *++str)
		return false;
	return true;
}

bool    isDouble(const char *str)
{
	if (!*str)
		return (false);
	while (isspace(*str))
		++str;
	if (!strcmp(str, "nan"))
		return true;
	if (*str == '+' || *str == '-')
		++str;
	if (!strcmp(str, "inf"))
		return true;
	while (isdigit(*str))
		++str;
	if (*str == '.')
		++str;
	while (isdigit(*str))
		++str;
	if (*str)
		return false;
	return true;
}