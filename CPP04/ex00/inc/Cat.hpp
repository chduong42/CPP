/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:20:16 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 21:08:53 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
		Cat(Cat const &src);
		~Cat();

		Cat&			operator=(Cat const &src);

		virtual void			makeSound() const;
};

#endif