/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:56:36 by chduong           #+#    #+#             */
/*   Updated: 2022/08/12 17:50:56 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
# include <iostream>

typedef unsigned int uint;

template<typename T>
class Array {
	private:
		T*			_array;
		uint		_n;

	public:
		Array() : _array(NULL), _n(0) {}
		Array(uint const n) : _array(new T[n]), _n(n) {}
		Array(Array<T> const &src) : _array(NULL), _n(0) { *this = src;}
		~Array() {
			if (this->_n > 0)
				delete [] this->_array;
		}

		Array&  operator=(Array<T> const &rhs)
		{
			if (this != &rhs)
			{
				if (this->_array)
					delete [] this->_array;
				this->_n = rhs._n;
				this->_n ? this->_array = new T [this->_n] : this->_array = NULL;
				for (uint i = 0; i < rhs._n; i++)
					this->_array[i] = rhs._array[i];
			}
			return *this;
		}

		T&		operator[](uint index) {
			if (index >= this->_n)
				throw Array::OutOfLimitsException();
			return this->_array[index];
		}

		uint		size(void) const {
			return this->_n;
		}

		void		printOut(void) const {
			for (uint i = 0; i < this->_n; i++)
				std::cout << "[" << i << "]: " << this->_array[i] << std::endl;
		}

		class OutOfLimitsException : public std::exception {
			public:
				virtual void printWhat() const throw() {
					std::cerr << "Access denied : you are out of limits" << std::endl;
				}
		};
};

#endif