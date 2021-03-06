/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:41:20 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/01 12:48:27 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
	private:
		std::string		_name;
	
	public:
		Zombie(std::string name);
		~Zombie(void);
		
		void	announce(void) const;
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif