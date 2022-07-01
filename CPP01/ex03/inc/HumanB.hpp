/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:51:52 by chduong           #+#    #+#             */
/*   Updated: 2022/07/01 17:55:24 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
    private:
        Weapon          _weapon;
        std::string     _name;
        
    public:
        HumanB();
        ~HumanB();

        void    attack();
};

#endif

