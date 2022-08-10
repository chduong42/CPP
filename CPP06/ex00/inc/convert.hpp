/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:36:40 by chduong           #+#    #+#             */
/*   Updated: 2022/08/10 14:15:35 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <cmath>
# include <cctype>
# include <cerrno>
# include <cfloat>
# include <climits>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <iostream>

void        printImpossible(void);

void		castFromChar(const char *str);
void		castFromInt(const char *str);
void		castFromFloat(const char *str);
void		castFromDouble(const char *str);

bool		isChar(const char *str);
bool		isInt(const char *str);
bool		isFloat(const char *str);
bool		isDouble(const char *str);

#endif