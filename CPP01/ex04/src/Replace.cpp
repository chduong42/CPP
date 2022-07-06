/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:51:10 by chduong           #+#    #+#             */
/*   Updated: 2022/07/06 15:59:08 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace() {
	return;
}

Replace::~Replace() {
	this->_in.close();
	this->_out.close();
}

void    Replace::openfiles(std::string filename) {
	std::string	buff = filename + ".replace";
	
	this->_in.open(filename.c_str());
	if (!this->_in.is_open())
		return;
	this->_out.open(buff.c_str());
}

void	Replace::replace(std::string toReplace, std::string replaceWith) {
	std::string	line;
	std::size_t	pos;
	
	while (this->_in.eof() == false)
	{
		std::getline(this->_in, line);
		pos = line.find(toReplace);
		while (pos != std::string::npos)
		{
			line.erase(pos, toReplace.length());
			line.insert(pos, replaceWith);			
			pos = line.find(toReplace);
		}
		this->_out << line;
		if (!this->_in.eof())
			this->_out << "\n";
	}		
}