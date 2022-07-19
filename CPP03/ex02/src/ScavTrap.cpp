/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:15:45 by chduong           #+#    #+#             */
/*   Updated: 2022/07/19 21:35:05 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), _gateKeeper(false) {
	std::cout << "Default Constructor called : unknown ScavTrap created" << std::endl;
	_name = "noName";
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _gateKeeper(false) {
	// _name = name;
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
	std::cout << "Parametric Constructor called : ScavTrap " << this->_name << " created" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << "Copy Constructor called : ScavTrap " << src._name << " cloned" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor called : ScavTrap " << this->_name << " destroyed" << std::endl;
	return;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &src) {
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (!this->_hit_pts)
		std::cout << this->_name << ": Error 💀" << std::endl;
	else if (!this->_energy_pts)
		std::cout << this->_name << ": Out of energy" << std::endl;
	else {
		std::cout << this->_name << " punches " << target;
		std::cout << " causing " << this->_attack_dmg << " points of damage! ";
		this->_energy_pts--;
		std::cout <<  "(" << this->_energy_pts << " energy left)" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	if (this->_gateKeeper == false)
	{
		this->_gateKeeper = true;
		std::cout << this->_name << " Gate Keeper Mode : On" << std::endl;
	}
	else
	{
		this->_gateKeeper = false;
		std::cout << this->_name << " Gate Keeper Mode : Off" << std::endl;
	}
}