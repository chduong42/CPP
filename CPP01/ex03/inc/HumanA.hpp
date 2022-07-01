/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:30:06 by chduong           #+#    #+#             */
/*   Updated: 2022/07/01 17:54:32 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
    private:
        Weapon          _weapon;
        std::string     _name;
        
    public:
        HumanA();
        ~HumanA();

        void    attack();
};

#endif

