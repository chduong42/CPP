/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:48:13 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/07 16:57:40 by chduong          ###   ########.fr       */
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
    std::cout << "Weapon [" << BRED << this->_type << RESET;
    std::cout <<  "] has changed to [" << BGRN << type << RESET << "]" << std::endl;
    this->_type = type;
}