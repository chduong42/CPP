/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kennyduong <kennyduong@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:48:20 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/04 19:27:34 by kennyduong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
    std::cout << "HumanA " << this->_name << " with " << this->_weapon.getType() << " created" << std::endl;
}

HumanA::~HumanA() {
    std::cout << "HumanA " << this->_name << " with " << this->_weapon.getType() << " destroyed" << std::endl;
}

void    HumanA::attack() {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}