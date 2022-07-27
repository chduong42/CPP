/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:23:20 by chduong           #+#    #+#             */
/*   Updated: 2022/07/27 18:23:34 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal {
	protected:
		std::string		_type;
	
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal();

		WrongAnimal&	operator=(WrongAnimal const &src);

		std::string		getType() const;
		void			makeSound() const;
};

#endif