/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:41:20 by kennyduong        #+#    #+#             */
/*   Updated: 2022/07/01 15:54:33 by chduong          ###   ########.fr       */
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
		Zombie();
		~Zombie();
		
		void	announce() const;
		void	setname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif