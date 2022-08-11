/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:34:09 by chduong           #+#    #+#             */
/*   Updated: 2022/08/10 18:01:56 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main(void)
{
    Data    data;
    data.c = 'a';
    data.i = 42;
    data.f = 42.42f;
    std::cout << "adress data : " << &data << std::endl;
    std::cout << "de/serialize: " <<  deserialize(serialize(&data)) << std::endl;
    
    return 0;
}