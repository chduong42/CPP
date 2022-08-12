/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:23:57 by chduong           #+#    #+#             */
/*   Updated: 2022/08/12 18:36:18 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 10

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % 101;
		numbers[i] = value;
		mirror[i] = value;
	}
	std::cout << "\n================ numbers content ================" << std::endl;
	numbers.printOut();
		
	std::cout << "\n================ Test of overload assignment (tmp = numbers) ================" << std::endl;
	Array<int> tmp = numbers;
	tmp.printOut();

	std::cout << "\n================ Test Copy Construtor (test(numbers)) ================" << std::endl;
	Array<int> test(numbers);
	test.printOut();

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	std::cout << "\n================ numbers content cleaning ================" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		numbers[i] = 0;
	numbers.printOut();

	std::cout << "\n================ Check of tmp ================" << std::endl;
	tmp.printOut();
	std::cout << "\n================ Check of test ================" << std::endl;
	test.printOut();

	std::cout << "\n================ Test negative index ================" << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const Array<int>::OutOfLimitsException& e)
	{
		e.printWhat();
	}

	std::cout << "\n================ Test out index ================" << std::endl;
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const Array<int>::OutOfLimitsException& e)
	{
		e.printWhat();
	}

	std::cout << "\n================ Test of leaks ================" << std::endl;
	std::cout << "\n---------------- init tmp2 with size 5 and value 1 ----------------" << std::endl;
	Array<int> tmp2(5);
	for (int i = 0; i < 5; i++)
		tmp2[i] = 1;
	tmp2.printOut();
	std::cout << "\n---------------- tmp2 = numbers ----------------" << std::endl;
	tmp2 = numbers;
	tmp2.printOut();
	
	delete [] mirror;
	return 0;
}