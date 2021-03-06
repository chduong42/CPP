/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kennyduong <kennyduong@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:41:13 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/04 16:12:15 by kennyduong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
    std::cout << "Zombie " << this->_name << " is created !" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie " << this->_name << " is destroyed !" << std::endl;
}

void    Zombie::announce(void) const {
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}