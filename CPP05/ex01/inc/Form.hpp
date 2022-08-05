/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:39:13 by chduong           #+#    #+#             */
/*   Updated: 2022/08/05 16:17:37 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include "colors.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string		_name;
        bool                    _signed;
		const int				_sign_grade;
		const int				_exec_grade;

	public:
		Form();
		Form(std::string name, int sign_grade, int exec_grade);
		Form(Form const &src);
		virtual ~Form();

		Form&					operator=(Form const &src);

		std::string				getName() const;
		int						getSignGrade() const;
		int						getExecGrade() const;
		bool					isSigned() const;
		void					beSigned(Bureaucrat &br);
		
	class GradeTooHighException : public std::exception {
		public:
			virtual void printErr() const throw() {
				std::cout << "One of the grades is too high" << std::endl;
			}
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual void printErr() const throw() {
				std::cout << "One of the grades is too low" << std::endl;
			}
	};
};

std::ostream& operator<<(std::ostream &flux, Form const& src);

#endif