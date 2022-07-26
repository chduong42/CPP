/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:20:16 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 17:41:44 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*brain;
    public:
        Cat();
		Cat(std::string type);
		Cat(Cat const &src);
		~Cat();

		Cat&			operator=(Cat const &src);

		virtual void			makeSound() const;
};

#endif