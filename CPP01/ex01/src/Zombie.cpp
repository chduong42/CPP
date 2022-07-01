/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:41:13 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/01 16:05:08 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "An unamed zombie is created !" << std::endl;
    return;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->_name << " is destroyed !" << std::endl;
    return;
}

void    Zombie::setname(std::string name) {
    this->_name = name;
}

void    Zombie::announce(void) const {
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}