/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kennyduong <kennyduong@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:02:25 by chduong           #+#    #+#             */
/*   Updated: 2022/08/02 21:06:08 by kennyduong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <string>
# include <iostream>

class AAnimal {
	protected:
		std::string		_type;
	
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();

		AAnimal&			operator=(AAnimal const &src);

		std::string		getType() const;
		virtual void	makeSound() = 0;
};

#endif