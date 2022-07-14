/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:34:27 by chduong           #+#    #+#             */
/*   Updated: 2022/07/14 18:31:32 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default Constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "Constructor 1 called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name, uint hp, uint energy, uint damage) :
_name(name), _hit_pts(hp), _energy_pts(energy), _attack_dmg(damage) {
	std::cout << "Constructor 4 called" << std::endl;
	return;
}