/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:20:42 by chduong           #+#    #+#             */
/*   Updated: 2022/07/27 18:43:10 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain					*_brain;
		
	public:
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog&					operator=(Dog const &src);

		virtual void			makeSound() const;
		void					setIdeas(int nb_ideas);
		void					printIdeas() const;
		void					deleteIdeas();
};

#endif