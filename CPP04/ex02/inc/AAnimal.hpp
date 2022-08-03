/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:02:25 by chduong           #+#    #+#             */
/*   Updated: 2022/08/03 18:11:03 by chduong          ###   ########.fr       */
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
		virtual void	makeSound() const = 0;
};

#endif