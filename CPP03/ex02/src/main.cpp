/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:36:48 by chduong           #+#    #+#             */
/*   Updated: 2022/07/19 21:32:47 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap John("John");
    ScavTrap Tom("Tom");
    
    std::cout << "\n========== FIGHT ! ===========\n" << std::endl;
    John.attack("Tom");
    Tom.takeDamage(John.getAttackDmg());
    
    Tom.attack("John");
    John.takeDamage(Tom.getAttackDmg());

    John.beRepaired(5);
 
    Tom.guardGate();
    std::cout << "\n========== END MATCH ! ===========\n" << std::endl;
    return 0;
}