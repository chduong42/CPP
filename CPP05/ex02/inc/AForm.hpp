/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:39:13 by chduong           #+#    #+#             */
/*   Updated: 2022/08/05 23:56:13 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"
# include "colors.hpp"
# include <string>
# include <iostream>
# include <cstdlib>

class Bureaucrat;

class AForm {
	private:
		const std::string		_name;
        bool                    _signed;
		const int				_sign_grade;
		const int				_exec_grade;
		std::string				_target;

	public:
		AForm();
		AForm(std::string name, int sign_grade, int exec_grade);
		AForm(std::string name, int sign_grade, int exec_grade, std::string target);
		AForm(AForm const &src);
		virtual ~AForm();

		AForm&					operator=(AForm const &src);

		std::string				getName() const;
		std::string				getTarget() const;
		int						getSignGrade() const;
		int						getExecGrade() const;
		bool					isSigned() const;
		
		void					setTarget(std::string target);
		void					setSignature(bool status);
		void					beSigned(Bureaucrat &br);
		
		virtual void			execute(Bureaucrat const & executor) const = 0;
		
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

			virtual void printReq() const throw() {
				std::cout << "Form is not signed or Bureaucrate is undergraded to execute" << std::endl;
			}
	};
};

std::ostream& operator<<(std::ostream &flux, AForm const& src);

#endif