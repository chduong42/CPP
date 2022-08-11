/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:23:44 by chduong           #+#    #+#             */
/*   Updated: 2022/08/11 19:54:37 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "print.hpp"

int main(void)
{
    std::cout << "================= Char array ===============" << std::endl;
    char str[] = "ABCDEF";
    iter(str, 6, print);
    
    std::cout << "\n================= Int array ===============" << std::endl;
    int integer[] = {1,2,3,4,5,6,7,8,9,0};
    iter(integer, 10, print);

    std::cout << "\n================= Float array ===============" << std::endl;
    float floater[] = {1.1, 2.2, 3.1, 4.5, 5.8, 6.9, 7.4, 8.25, 9.01, 0.02};
    iter(floater, 10, print);

    return 0;
}