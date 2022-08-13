/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 20:46:56 by chduong           #+#    #+#             */
/*   Updated: 2022/08/13 12:34:56 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <cstdlib>
# include <climits>

typedef unsigned int uint;

class Span {
	private:
		uint					_N;
		std::vector<int>		_V;

	public:
		Span();
		Span(uint N);
		Span(Span const &src);
		~Span();

		Span&	operator=(Span const &src);
		
		void	addNumber(int val);
		void	addPlageNumber(uint plage);
		void	printNumber() const;
		int		shortestSpan() const;
		int		longestSpan() const;
	
	class TooManyException : public std::exception {
		public:
			virtual void printWhat() const throw() {
				std::cerr << "Exception: too many elements" << std::endl;
			}
	};

	class NoSpanException : public std::exception {
		public:
			virtual void printWhat() const throw() {
				std::cerr << "Exception: No span, there is not enough elements" << std::endl;
			}
	};
};

#endif