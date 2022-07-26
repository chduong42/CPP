/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:20:42 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 17:49:22 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain	*brain;
		
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const &src);
		~Dog();

		Dog&			operator=(Dog const &src);

		virtual void			makeSound() const;
};

#endif