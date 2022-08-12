/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:06:07 by chduong           #+#    #+#             */
/*   Updated: 2022/08/12 19:47:14 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <exception>

class NotFoundException : public std::exception {
	public:
		virtual void printWhat() const throw() {
			std::cerr << "Exception: value not found" << std::endl;
		}
};


template<typename T>
int		easyfind(T a, int b){
	typename T::iterator	it;
	
	it = find(a.begin(), a.end(), b);
	if (it == a.end())
		throw NotFoundException();
	return b;
}

#endif