/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:56:31 by chduong           #+#    #+#             */
/*   Updated: 2022/06/16 19:28:50 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact		_contacts[8];

	public:
		PhoneBook(void); // Constructeur par defaut
		~PhoneBook(void); // Destructor
				
		void		addContact(int i);
		void		printPB(void);
		void		searchContact(void);
};

#endif