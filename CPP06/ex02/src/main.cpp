/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:09:06 by chduong           #+#    #+#             */
/*   Updated: 2022/08/10 19:09:51 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	std::cout << "identify(Base *p):" << std::endl;
	identify(generate());
	std::cout << "\nidentify(Base &p):" << std::endl;
	identify(*generate());
	return 0;
}