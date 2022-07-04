/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kennyduong <kennyduong@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:48:13 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/04 18:24:28 by kennyduong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    std::cout << "Weapon " << this->_type << " created" << std::endl;
}
Weapon::~Weapon() {
    std::cout << "Weapon " << this->_type << " destroyed" << std::endl;
}

std::string Weapon::getType() const {
    return (this->_type);
}

void    Weapon::setType(std::string type) {
    this->_type = type;
}