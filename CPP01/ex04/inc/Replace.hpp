/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:51:07 by chduong           #+#    #+#             */
/*   Updated: 2022/07/06 14:06:00 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP
# include <iostream>
# include <fstream>
# include <string>
# include <cstring>

class Replace {
	private:
		std::ifstream	_in;
		std::ofstream	_out;
		
	public:
		Replace();
		~Replace();

		void			openfiles(std::string filename);
		void			replace(std::string toReplace, std::string replaceWith);
};

#endif