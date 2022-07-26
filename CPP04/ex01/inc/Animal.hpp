/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:02:25 by chduong           #+#    #+#             */
/*   Updated: 2022/07/22 18:13:46 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
	protected:
		std::string		_type;
	
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &src);
		virtual ~Animal();

		Animal&			operator=(Animal const &src);

		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif