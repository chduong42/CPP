/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:48:20 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/07 16:56:15 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
    std::cout << "HumanA " << BCYN << this->_name << RESET << " with ";
    std::cout << BCYN << this->_weapon.getType() << RESET << " created" << std::endl;
}

HumanA::~HumanA() {
    std::cout << "HumanA " << BCYN << this->_name << RESET << " with ";
    std::cout << BCYN << this->_weapon.getType() << RESET << " destroyed" << std::endl;
}

void    HumanA::attack() {
    std::cout << "\n" << BCYN << this->_name << RESET << " attacks with their ";
    std::cout << BCYN << this->_weapon.getType() << RESET << std::endl << std::endl;
}