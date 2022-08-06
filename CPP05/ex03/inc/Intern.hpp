/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:23:17 by chduong           #+#    #+#             */
/*   Updated: 2022/08/06 19:26:38 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern(std::string target);
		Intern(Intern const &src);
		~Intern();

		Intern&	operator=(Intern const &src);

        AForm*    makeForm(std::string form, std::string target);

		class FormExistException : public std::exception {
			public:
				virtual void printErr() const throw() {
					std::cerr << "Exception: The Form asked doesn't exist" << std::endl;
					std::cerr << "Form possibilities: \n-shrubbery creation" << std::endl;
					std::cerr << "-robotomy request\n-presidential pardon" << std::endl;
				}
		};
};

#endif