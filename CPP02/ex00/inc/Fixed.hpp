/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:44:04 by chduong           #+#    #+#             */
/*   Updated: 2022/07/08 23:31:37 by chduong          ###   ########.fr       */
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
		Fixed(); // Constructeur par défaut
		Fixed(Fixed const &src); // Constructeur de recopie
		~Fixed(); // Destructeur éventuellement virtuel

		Fixed &operator=(Fixed const &src); // Operator d'affectation
		
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif