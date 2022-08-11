/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:06:07 by chduong           #+#    #+#             */
/*   Updated: 2022/08/11 17:21:05 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP
# include <iostream>

template<typename T>
T const & max(T const & x, T const & y) {
	return (x > y ? x : y);
}

template<typename T>
T const & min(T const & x, T const & y) {
	return (x < y ? x : y);
}

template<typename T>
void	swap(T& x, T& y) {
	T	tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}


#endif