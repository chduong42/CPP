/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:20:16 by chduong           #+#    #+#             */
/*   Updated: 2022/08/03 18:10:54 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
	private:
		Brain					*_brain;

	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat&					operator=(Cat const &src);

		virtual void			makeSound() const;
		void					setIdeas(int nb_ideas);
		void					printIdeas() const;
		void					deleteIdeas();
};

#endif