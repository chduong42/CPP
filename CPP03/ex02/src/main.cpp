/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:36:48 by chduong           #+#    #+#             */
/*   Updated: 2022/07/21 16:05:32 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    ClapTrap John("John");
    FragTrap Sam("Sam");
    
    std::cout << "\n========== FIGHT ! ===========\n" << std::endl;
    John.attack("Sam");
    Sam.takeDamage(John.getAttackDmg());
    
    Sam.attack("John");
    John.takeDamage(Sam.getAttackDmg());

    Sam.highFivesGuys();

    std::cout << "\n========== END MATCH ! ===========\n" << std::endl;
    return 0;
}