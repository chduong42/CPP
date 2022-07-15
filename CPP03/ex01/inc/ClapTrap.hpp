/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:33:46 by chduong           #+#    #+#             */
/*   Updated: 2022/07/14 22:50:49 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

typedef unsigned int uint;

class ClapTrap {
	private:
		std::string     _name;
		uint			_hit_pts;
		uint		    _energy_pts;
		uint		    _attack_dmg;        

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();
		
		ClapTrap&		operator=(ClapTrap const &src);
	
		void			attack(const std::string& target);
		void			takeDamage(uint amount);
		void			beRepaired(uint amount);
};

#endif