/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:02:25 by chduong           #+#    #+#             */
/*   Updated: 2022/08/06 14:39:47 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "AForm.hpp"
# include "colors.hpp"
# include <string>
# include <iostream>

class AForm;

class Bureaucrat {
	private:
		const std::string		_name;
		int						_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		virtual ~Bureaucrat();

		Bureaucrat&			operator=(Bureaucrat const &src);

		std::string			getName() const;
		int					getGrade() const;
		void				upGrade();
		void				downGrade();
		void				signForm(AForm &AForm) const;
		bool				executeForm(AForm const &form) const;
	
	class GradeTooHighException : public std::exception {
		public:
			virtual void printErr() const throw() {
				std::cout << "Exception: The highest grade is 1, can't be less" << std::endl;
			}
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual void printErr() const throw() {
				std::cout << "Exception: The lowest grade is 150, can't be more" << std::endl;
			}
	};
};

std::ostream& operator<<(std::ostream &flux, Bureaucrat const& src);

#endif