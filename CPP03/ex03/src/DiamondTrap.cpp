/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:21:17 by chduong           #+#    #+#             */
/*   Updated: 2022/07/21 22:46:42 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "Default Constructor called : unamed DiamondTrap created" << std::endl;
	_hit_pts = FragTrap::_hit_pts;
	_energy_pts = ScavTrap::_energy_pts;
	_attack_dmg = FragTrap::_attack_dmg;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << "Parametric Constructor called : DiamondTrap " << this->_name << " created" << std::endl;
	_hit_pts = FragTrap::_hit_pts;
	_energy_pts = ScavTrap::_energy_pts;
	_attack_dmg = FragTrap::_attack_dmg;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
	std::cout << "Copy Constructor called : DiamondTrap " << src._name << " cloned" << std::endl;
	*this = src;
	return;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor called : DiamondTrap " << this->_name << " destroyed" << std::endl;
	return;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &src) {
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy_pts = src._energy_pts;
	this->_attack_dmg = src._attack_dmg;
	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << "I am " << this->_name << " and also " << this->ClapTrap::_name << std::endl;
}