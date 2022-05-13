/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:50:34 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 17:16:14 by rkaufman         ###   ########.fr       */
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
	void	(Karen::*f)(void);
	
	switch (level)
	{
	case "DEBUG":
		f = &Karen::debug;
		break;
	
	default:
		f = NULL;
		break;
	}
	f = &Karen::level;
}

void	Karen::debug(void)
{
	std::cout	<< "DEBUG level"
				<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< "I really do!" << std::endl;
}

void	Karen::info(void)
{
	std::cout	<< "INFO level"
				<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn’t put enough bacon in my burger! "
				<< "If you did, I wouldn’t be asking for more!" << std::endl;

}

void	Karen::warning(void)
{
	std::cout	<< "WARNING level"
				<< "I think I deserve to have some extra bacon for free. "
				<< "I’ve been coming for years whereas you started working "
				<< "here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout	<< "ERROR level"
				<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}
