/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:36:21 by chduong           #+#    #+#             */
/*   Updated: 2022/06/17 14:44:50 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    int         i = 0;
    PhoneBook   pb;
    std::string buff;
    
    std::cout << BWHT << "WELCOME TO THE PHONEBOOK !" << RESET << std::endl;
    std::cout << BGRN << "\"ADD\"" << RESET << " to add a new contact" << std::endl;
    std::cout << BCYN << "\"SEARCH\"" << RESET << " to search a contact" << std::endl;
    std::cout << BRED << "\"EXIT\"" << RESET << " to exit the phonebook";
    while (1)
    {
        std::cout << "\n==> ";
        std::getline(std::cin, buff);
        if (buff == "ADD")
            pb.addContact(i++);
        else if (buff == "SEARCH")
            pb.searchContact();
        else if (buff == "EXIT")
            break;
        if (i == 8)
            i = 0;
    }
    std::cout << "PHONEBOOK CLOSED, GOOD BYE !" << std::endl;
    return 0;
}