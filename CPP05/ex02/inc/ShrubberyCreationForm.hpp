/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:39:13 by chduong           #+#    #+#             */
/*   Updated: 2022/08/05 23:02:19 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREACTIONFORM_HPP
# define SHRUBBERYCREACTIONFORM_HPP
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &src);

		virtual void			execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream &flux, ShrubberyCreationForm const& src);

#endif