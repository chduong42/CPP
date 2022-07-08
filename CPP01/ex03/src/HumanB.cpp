/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:48:18 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/07 16:59:24 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    std::cout << "HumanB " << BMAG << this->_name << RESET << " created" << std::endl;
}

HumanB::~HumanB() {
    std::cout << "HumanB " << BMAG << this->_name << RESET << " destroyed" << std::endl;
}

void    HumanB::attack() {
    std::cout << "\n" << BMAG << this->_name << RESET << " attacks with their ";
    std::cout << BMAG << this->_weapon->getType() << RESET << std::endl << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
    std::cout << BMAG << this->_name << RESET << " has now a ";
    std::cout << BMAG << this->_weapon->getType() << RESET << std::endl;
}
