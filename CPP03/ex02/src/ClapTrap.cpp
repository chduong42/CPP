/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:34:27 by chduong           #+#    #+#             */
/*   Updated: 2022/07/19 21:30:58 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("noName"), _hit_pts(10), _energy_pts(10), _attack_dmg(0) {
	std::cout << "Default Constructor called : unknown ClapTrap created" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_pts(10), _energy_pts(10), _attack_dmg(0) {
	std::cout << "Parametric Constructor called : ClapTrap " << this->_name << " created" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy Constructor called : ClapTrap " << src._name << " cloned" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called : ClapTrap " << this->_name << " destroyed" << std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &src) {
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return *this;
}

void	ClapTrap::takeDamage(uint amount) {
	if (this->_hit_pts <= amount)
	{
		std::cout << this->_name << " died in the attack 💀" << std::endl;
		this->_hit_pts = 0;
		return;
	}
	this->_hit_pts -= amount;
	std::cout << this->_name << " takes " << amount << " damage and now has ";
	std::cout << this->_hit_pts << " HP left" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (!this->_hit_pts)
		std::cout << this->_name << ": I can't attack, because I am died 💀" << std::endl;
	else if (!this->_energy_pts)
		std::cout << this->_name << ": I can't attack, because I am out of energy" << std::endl;
	else {
		std::cout << this->_name << ": Clap " << target;
		std::cout << " causing " << this->_attack_dmg << " points of damage! ";
		this->_energy_pts--;
		std::cout <<  "(" << this->_energy_pts << " energy left)" << std::endl;
	}
}

void	ClapTrap::beRepaired(uint amount) {
	if (!this->_hit_pts)
		std::cout << this->_name << " can't heal, because is died 💀" << std::endl;
	else if (!this->_energy_pts)
		std::cout << this->_name << " can't heal, because is out of energy" << std::endl;
	else {
		std::cout << this->_name << " is healing " << amount << " HP 🧡";
		this->_energy_pts--;
		std::cout <<  "(" << this->_energy_pts << " energy left)" << std::endl;
	}
}

uint	ClapTrap::getAttackDmg() {
	return this->_attack_dmg;
}