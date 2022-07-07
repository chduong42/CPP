/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:07:02 by chduong           #+#    #+#             */
/*   Updated: 2022/07/07 16:28:26 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    if (ac == 2)
        harl.complain(av[1]);
    else
        std::cout << "Using : ./harlFilter <level>" << std::endl;
    return (0);
}