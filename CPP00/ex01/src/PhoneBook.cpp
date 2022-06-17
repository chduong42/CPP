/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:32:41 by chduong           #+#    #+#             */
/*   Updated: 2022/06/17 14:35:32 by chduong          ###   ########.fr       */
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
	int	i;
	
	this->printPB();
	std::cout << "Which contact to display ? (0 to cancel)\nID: ";
	std::cin >> i;
	if (i < 0 || i > 8)
		std::cout << RED << "Error : Bad ID !" << RESET << std::endl;
	else if ( i == 0)
		return;
	else
		this->_contacts[i - 1].printData();
	std::cin.ignore();
}