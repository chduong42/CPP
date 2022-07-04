/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kennyduong <kennyduong@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:48:18 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/04 19:29:29 by kennyduong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    std::cout << "HumanB " << this->_name << " created" << std::endl;
}

HumanB::~HumanB() {
    std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
}

void    HumanB::attack() {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon) {
    this->_weapon = weapon;
}