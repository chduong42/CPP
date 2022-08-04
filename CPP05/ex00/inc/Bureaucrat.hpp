/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:02:25 by chduong           #+#    #+#             */
/*   Updated: 2022/08/04 15:43:20 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

class Bureaucrat {
	protected:
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
	
	class GradeTooHighException : public std::exception {
		public:
			
		
	};

	class GradeTooHighException : public std::exception {
		public:
			
		
	};

};

std::ostream& operator<<(std::ostream &flux, Bureaucrat const& src);

#endif