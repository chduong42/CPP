/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:26:17 by chduong           #+#    #+#             */
/*   Updated: 2022/07/21 22:41:28 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default Constructor called : unamed FragTrap created" << std::endl;
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "Parametric Constructor called : FragTrap " << this->_name << " created" << std::endl;
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
	return;
}

FragTrap::FragTrap(FragTrap const &src) {
	std::cout << "Copy Constructor called : FragTrap " << src._name << " cloned" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor called : FragTrap " << this->_name << " destroyed" << std::endl;
	return;
}

FragTrap&	FragTrap::operator=(FragTrap const &src) {
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return *this;
}

void    FragTrap::highFivesGuys(void) {
	std::string buff;
	
	std::cout << this->_name << " : We win ! High five ???" << std::endl;
	while (1)
	{
		std::getline(std::cin, buff);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			exit(-1);
		}
		if (buff == "5" || buff == "FIVE")
			break;
		else
			std::cout << this->_name << " : Hm... Dude it's not a HIGH FIVE, give me a FIVE or 5" << std::endl;
	}
	std::cout << this->_name << " : Thanks guys !" << std::endl;
}