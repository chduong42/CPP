/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:06:13 by chduong           #+#    #+#             */
/*   Updated: 2022/07/26 19:17:22 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain {
	protected:
		std::string		_ideas[100];
	
	public:
		Brain();
		Brain(Brain const &src);
		virtual ~Brain();

		Brain&			operator=(Brain const &src);
		
		void			setIdeas(int nb_ideas);
		void			deleteIdeas();
		void			printIdeas();
};

#endif