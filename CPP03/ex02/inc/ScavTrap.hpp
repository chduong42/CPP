/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:33:46 by chduong           #+#    #+#             */
/*   Updated: 2022/07/19 20:32:59 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		bool			_gateKeeper;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();
		
		ScavTrap&		operator=(ScavTrap const &src);
	
		void			guardGate(void);
		void			attack(const std::string& target);
};

#endif