/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:44:04 by chduong           #+#    #+#             */
/*   Updated: 2022/07/14 15:10:56 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					_value;
		static int const	_nbits;
		
	public:
		Fixed();											// Constructeur par défaut
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const &src);							// Constructeur de recopie
		~Fixed(); 											// Destructeur éventuellement virtuel
		
		Fixed&				operator=(Fixed const &src);	// Operator d'affectation
		Fixed&				operator++();
		Fixed&				operator--();
		
		Fixed				operator++(int);
		Fixed				operator--(int);
		Fixed 				operator+(Fixed const &src) const;
		Fixed 				operator-(Fixed const &src) const;
		Fixed 				operator*(Fixed const &src) const;
		Fixed 				operator/(Fixed const &src) const;
		
		bool 				operator<(Fixed const &src) const;
		bool 				operator>(Fixed const &src) const;
		bool 				operator<=(Fixed const &src) const;
		bool 				operator>=(Fixed const &src) const;
		bool 				operator==(Fixed const &src) const;
		bool 				operator!=(Fixed const &src) const;

		int					getRawBits(void) const;
		int					toInt(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;

		static Fixed		min(Fixed &a, Fixed &b);
		static const Fixed	min(const Fixed &a, const Fixed &b);
		static Fixed		max(Fixed &a, Fixed &b);
		static const Fixed	max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &flux, Fixed const& src);

#endif