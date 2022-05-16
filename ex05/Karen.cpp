/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:50:34 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/16 08:42:18 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout	<< "Karen arrived!\n";
}

Karen::~Karen(void)
{
	std::cout	<< "Karen left!\n";
}

void	Karen::complain(std::string level)
{
	std::string const level_switch[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*f[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == level_switch[i])
			(this->*f[i])();
	}
}

void	Karen::debug(void)
{
	std::cout	<< "DEBUG level:\n"
				<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				<< "I really do!" << std::endl;
}

void	Karen::info(void)
{
	std::cout	<< "INFO level:\n"
				<< "I cannot believe adding extra bacon costs more money.\n"
				<< "You didn’t put enough bacon in my burger!\n"
				<< "If you did, I wouldn’t be asking for more!" << std::endl;

}

void	Karen::warning(void)
{
	std::cout	<< "WARNING level:\n"
				<< "I think I deserve to have some extra bacon for free.\n"
				<< "I’ve been coming for years whereas you started working "
				<< "here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout	<< "ERROR level:\n"
				<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}
