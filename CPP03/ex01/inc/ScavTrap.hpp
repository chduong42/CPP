/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:33:46 by chduong           #+#    #+#             */
/*   Updated: 2022/07/15 12:15:28 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <string>

typedef unsigned int uint;

class ScavTrap : public ClapTrap {
	private:
		std::string     _name;
		uint			_hit_pts;
		uint		    _energy_pts;
		uint		    _attack_dmg;        

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();
		
		ScavTrap&		operator=(ScavTrap const &src);
	
		void			guardGate();
};

#endif