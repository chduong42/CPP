/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:44:55 by chduong           #+#    #+#             */
/*   Updated: 2022/07/14 15:46:52 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

void	make_tests(int value_of_b, float value_of_c)
{
	Fixed a;
	const Fixed b(value_of_b);
	const Fixed c(value_of_c);
	Fixed d(c);
	std::cout << "a = " << a << std::endl;
	std::cout << "const b = " << b << std::endl;
	std::cout << "const c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;
	
	a = b;
	std::cout << "Assignation operator (a = b) : a = " << a << std::endl << std::endl;
	
	std::cout << "Comparison operators" << std::endl;
	std::cout << "a < c is " << (a < c) << std::endl;
	std::cout << "a < b is " << (a < b) << std::endl;
	std::cout << "a > c is " << (a > c) << std::endl;
	std::cout << "a > b is " << (a > b) << std::endl;
	std::cout << "a <= c is " << (a <= c) << std::endl;
	std::cout << "a <= b is " << (a <= b) << std::endl;
	std::cout << "a >= c is " << (a >= c) << std::endl;
	std::cout << "a >= b is " << (a >= b) << std::endl;
	std::cout << "a == c is " << (a == c) << std::endl;
	std::cout << "a == b is " << (a == b) << std::endl;
	std::cout << "a != c is " << (a != c) << std::endl;
	std::cout << "a != b is " << (a != b) << std::endl << std::endl;
	
	std::cout << "Binary operators" << std::endl;
	std::cout << "c + a = " << (c + a) << std::endl;
	std::cout << "c - a = " << (c - a) << std::endl;
	std::cout << "c * a = " << (c * a) << std::endl;
	std::cout << "c / a = " << (c / a) << std::endl << std::endl;
	
	std::cout << "Decrementation / Incrementation" << std::endl;
	std::cout << "a++ = " << a++ << "\ta = " << a << std::endl;
	std::cout << "++a = " << ++a << "\ta = " << a << std::endl;
	std::cout << "a-- = " << a-- << "\ta = " << a << std::endl;
	std::cout << "--a = " << --a << "\ta = " << a << std::endl << std::endl;
	
	std::cout << "Other Functions" << std::endl;
	std::cout << "c.toInt() = " << c.toInt() << std::endl;
	std::cout << "c.toFloat() = " << c.toFloat() << std::endl;
	std::cout << "min(a, d) = " << Fixed::min(a, d) << std::endl;
	std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;
	std::cout << "max(a, d) = " << Fixed::max(a, d) << std::endl;
	std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl << std::endl;
}
int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "Subject Test :" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "\nAll Test with positive numbers\n" << std::endl;
	make_tests(14, 50.125f);
	
	std::cout << "\n\nAll Test with negative numbers\n" << std::endl;
	make_tests(-12, -80.175829380f);
}
