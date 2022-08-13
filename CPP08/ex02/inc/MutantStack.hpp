/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:15:05 by chduong           #+#    #+#             */
/*   Updated: 2022/08/13 15:19:22 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP
# include <iostream>
# include <stack>
# include <algorithm>

typedef unsigned int uint;

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>() {}
		MutantStack<T>(MutantStack<T> const &src) {*this = src;}
		virtual ~MutantStack<T>() {}

		MutantStack&	operator=(MutantStack const &src) {
			return std::stack<T>::operator=(src);
		}
		
		typedef typename std::stack<T>::container_type				container_type;
		typedef typename container_type::iterator               	iterator;
		typedef typename container_type::const_iterator         	const_iterator;
		typedef typename container_type::reverse_iterator       	reverse_iterator;
		typedef typename container_type::const_reverse_iterator 	const_reverse_iterator;

		iterator						begin() { return (this->c.begin());}
		iterator						end() { return (this->c.end());}
		const_iterator					begin() const { return (this->c.begin());}
		const_iterator					end() const { return (this->c.end());}
		reverse_iterator				rbegin() { return (this->c.rbegin());}
		reverse_iterator				rend() { return (this->c.rend());}
		const_reverse_iterator			rbegin() const { return (this->c.rbegin());}
		const_reverse_iterator			rend() const { return (this->c.rend());}
		
};

#endif