/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:22:06 by chduong           #+#    #+#             */
/*   Updated: 2022/07/01 16:39:53 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    strPtr = &str;
    std::string&    strRef = str;
    
    std::cout << "memory address of str =\t\t" << &str << std::endl;
    std::cout << "memory address of strPtr =\t" << &strPtr << std::endl;
    std::cout << "memory address of strRef =\t" << &strRef << std::endl << std::endl;

    std::cout << "value of str =\t\t" << str << std::endl;
    std::cout << "value of strPtr =\t" << *strPtr << std::endl;
    std::cout << "value of strRef =\t" << strRef << std::endl;
}