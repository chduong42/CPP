/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:00:33 by chduong           #+#    #+#             */
/*   Updated: 2022/06/17 14:34:46 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {
	return;
}

bool is_digits(const std::string str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}


bool is_spaces(std::string str) {

	return (str.find_first_not_of("\t\n\v\f\r") == std::string::npos);
}

void	getnumber(std::string &str)
{
	while (1)
	{
		std::cout << "Enter the phone number :\t";
    	std::getline(std::cin, str);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			exit(-1);
		}
		if (is_digits(str) == false)
			std::cout << RED << "Error: Not a phone number" << RESET << std::endl;
		else if (str.empty() || is_spaces(str))
			std::cout << RED << "Error: Empty phone number" << RESET << std::endl;
		else
			return;
	}
}

void	getstr(const char *field, std::string &str)
{
	while (1)
	{
		std::cout << field;
		std::getline(std::cin, str);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			exit(-1);
		}
		if (str.empty() || is_spaces(str))
			std::cout << RED << "Error: Empty field is not allowed" << RESET << std::endl;
		else
			return;
	}
}

void	Contact::getData(void) {
	
	getnumber(this->_phoneNumber);
	getstr("Enter the first name:\t\t", this->_firstName);
	getstr("Enter the last name :\t\t", this->_lastName);
	getstr("Enter the nickname :\t\t", this->_nickName);
	getstr("Enter the dark secret...\t", this->_darkSecret);
}

void	Contact::printData(void) {
	std::cout << "Phone number :\t" << this->_phoneNumber << std::endl;
	std::cout << "First name :\t" << this->_firstName << std::endl;
	std::cout << "Last name :\t" << this->_lastName << std::endl;
	std::cout << "Nick name :\t" << this->_nickName << std::endl;
	std::cout << "Dark secret :\t" << this->_darkSecret << std::endl;
}

std::string	Contact::getFirtname(void) {
	return (this->_firstName);
}

std::string	Contact::getLastname(void) {
	return (this->_lastName);
}

std::string	Contact::getNickname(void) {
	return (this->_nickName);
}