/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kennyduong <kennyduong@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:44:04 by chduong           #+#    #+#             */
/*   Updated: 2022/07/12 13:08:59 by kennyduong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private:
		int					_value;
		static int const	_nbits;
		
	public:
		Fixed();								// Constructeur par défaut
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const &src);				// Constructeur de recopie
		~Fixed(); 								// Destructeur éventuellement virtuel

		Fixed &operator=(Fixed const &src);		// Operator d'affectation
		Fixed &operator<<(Fixed const &src);	// Operator d'affectation
		
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
};

#endif