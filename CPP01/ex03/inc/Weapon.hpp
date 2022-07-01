/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:25:58 by chduong           #+#    #+#             */
/*   Updated: 2022/07/01 17:32:01 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {
    private:
        std::string     _type;
        
    public:
        Weapon();
        ~Weapon();

        std::string     getType() const;
        void            setType(std::string type);
};

#endif