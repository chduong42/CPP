/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:32:41 by chduong           #+#    #+#             */
/*   Updated: 2022/07/01 11:41:00 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void	PhoneBook::addContact(int i)
{
	std::cout << "\nNEW CONTACT" << std::endl;
	this->_contacts[i].getData();
}

void	printcase(std::string str)
{
	std::cout << std::setw(10);
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	std::cout << str << '|';
}

void	PhoneBook::printPB(void)
{
	int	i = 0;
	std::cout << "\n============ PHONE BOOK =============" << std::endl;
	std::cout << "|ID|FIRST NAME| LAST NAME|  NICKNAME| " << std::endl;
	std::cout << "|--|----------|----------|----------| " << std::endl;
	while (i < 8)
	{
		std::cout << "| " << i + 1 << "|";
		printcase(this->_contacts[i].getFirtname());
		printcase(this->_contacts[i].getLastname());
		printcase(this->_contacts[i].getNickname());
		std::cout << std::endl;
		++i;
	}
	std::cout << "=====================================" << std::endl;
}

void	PhoneBook::searchContact(void)
{
	int			i;
	std::string	buff;
	
	this->printPB();
	std::cout << "Which contact to display ?\nID: ";
	std::getline(std::cin, buff);
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		exit(-1);
	}
	i = atoi(buff.c_str());
	if (i > 0 && i <= 8)
		this->_contacts[i - 1].printData();
	else
		std::cout << RED << "Error : Bad ID !" << RESET << std::endl;
}
