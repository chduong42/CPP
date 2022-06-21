/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:56:42 by chduong           #+#    #+#             */
/*   Updated: 2022/06/21 11:45:10 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "colors.hpp"

class Contact {	
	private:
		std::string		_phoneNumber;
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickName;
		std::string		_darkSecret;

	public:
		Contact(void); // Constructeur par defaut
		~Contact(void); // Destructor

		void			getData(void);
		void			printData(void);
		std::string		getFirtname(void);
		std::string		getLastname(void);
		std::string		getNickname(void);
};

#endif