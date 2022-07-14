/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:33:46 by chduong           #+#    #+#             */
/*   Updated: 2022/07/14 18:30:10 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap {
	private:
		std::string     _name;
		unsigned int	_hit_pts;
		unsigned int    _energy_pts;
		unsigned int    _attack_dmg;        

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, uint hp, uint energy, uint damage);
		ClapTrap(ClapTrap const &src)
		~ClapTrap();
		
		ClapTrap&		operator=(ClapTrap const &src);
	
		void			attack(const std::string& target);
		void			takeDamage(uint amount);
		void			beRepaired(uint amount);
};

std::ostream& operator<<(std::ostream &flux, Fixed const& src);

#endif