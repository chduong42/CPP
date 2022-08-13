/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:08:03 by chduong           #+#    #+#             */
/*   Updated: 2022/08/13 14:39:11 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "========== Subject Test ===========" << std::endl;
	Span	sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	sp.printNumber();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n========== Test add more number than capacity size ===========" << std::endl;
	try {
		sp.addNumber(1);
	}
	catch (Span::TooManyException e)
	{
		e.printWhat();
	}

	std::cout << "\n========== Test no enough number : No Span exception ===========" << std::endl;
	Span	spe = Span(1);
	try {
		std::cout << spe.shortestSpan() << std::endl;
	}
	catch (Span::NoSpanException e)
	{
		e.printWhat();
	}
	try {
		spe.addNumber(1);
		std::cout << spe.longestSpan() << std::endl;
	}
	catch (Span::NoSpanException e)
	{
		e.printWhat();
	}

	std::cout << "\n========== My Little Test with 50 numbers ===========" << std::endl;
	Span	sp2 = Span(50);
	sp2.addPlageNumber(50);
	sp2.printNumber();
	std::cout << std::endl << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	

	std::cout << "\n========== My Big Test with 10 000 numbers ===========" << std::endl;
	Span	sp3 = Span(10000);
	sp3.addPlageNumber(10000);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	
	return 0;
}
