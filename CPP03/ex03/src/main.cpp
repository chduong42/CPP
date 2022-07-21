/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:36:48 by chduong           #+#    #+#             */
/*   Updated: 2022/07/21 22:39:33 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap John("John");
    DiamondTrap Daemon("Daemon");
    
    std::cout << "\n========== FIGHT ! ===========\n" << std::endl;
    John.attack("Daemon");
    Daemon.takeDamage(John.getAttackDmg());
    
    Daemon.attack("John");
    John.takeDamage(Daemon.getAttackDmg());

    Daemon.highFivesGuys();
    Daemon.beRepaired(1);
    Daemon.guardGate();
    Daemon.whoAmI();

    std::cout << "\n========== END MATCH ! ===========\n" << std::endl;
    return 0;
}