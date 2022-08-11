/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:23:39 by chduong           #+#    #+#             */
/*   Updated: 2022/08/11 19:51:54 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void	iter(T *tab, size_t const size, void (*ft)(T &)) {
		for (size_t i = 0; i < size; i++)
			ft(tab[i]);
}

#endif