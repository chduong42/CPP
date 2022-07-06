/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:07:00 by chduong           #+#    #+#             */
/*   Updated: 2022/07/06 18:35:41 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	return;
}

Harl::~Harl() {
	return;
}

void	Harl::debug(void) const {
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!\n" << std::endl;
}

void	Harl::info(void) const {
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger!\n";
	std::cout << "If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void) const {
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void) const {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void    Harl::complain(std::string level) const {
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	const ft_t			func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*(func[i]))();
			return;
		}
	}
}