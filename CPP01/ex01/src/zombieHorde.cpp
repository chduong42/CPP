/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:37:53 by chduong           #+#    #+#             */
/*   Updated: 2022/07/01 16:11:58 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Zombie.hpp"

 Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        horde[i].setname(name);
    }
    return (horde);
 }