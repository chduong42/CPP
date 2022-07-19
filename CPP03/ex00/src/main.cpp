/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:36:48 by chduong           #+#    #+#             */
/*   Updated: 2022/07/19 20:49:45 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap John("John");
    ClapTrap Tom("Tom");
    ClapTrap Tommy(Tom);
    
    std::cout << "\n========== FIGHT ! ===========\n" << std::endl;
    John.attack("Tom");
    Tom.takeDamage(5);
    Tom.beRepaired(5);
    
    Tom.attack("John");
    John.takeDamage(10);
    John.beRepaired(5);
    std::cout << "\n========== END MATCH ! ===========\n" << std::endl;
    return 0;
}