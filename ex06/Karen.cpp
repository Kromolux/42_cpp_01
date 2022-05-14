/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:12:53 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/14 14:34:00 by rkaufman         ###   ########.fr       */
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
	int	complaint = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == level_switch[i])
		{
			complaint = i;
			break ;
		}
	}
	switch (complaint)
	{
	case 0:
		Karen::debug();
		__attribute__ ((fallthrough));
	case 1:
		Karen::info();
		__attribute__ ((fallthrough));
	case 2:
		Karen::warning();
		__attribute__ ((fallthrough));
	case 3:
		Karen::error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
		break;
	}
}

void	Karen::debug(void)
{
	std::cout	<< "[ DEBUG ]\n"
				<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
				<< "I really do!\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout	<< "[ INFO ]\n"
				<< "I cannot believe adding extra bacon costs more money.\n"
				<< "You didn’t put enough bacon in my burger!\n"
				<< "If you did, I wouldn’t be asking for more!\n" << std::endl;

}

void	Karen::warning(void)
{
	std::cout	<< "[ WARNING ]\n"
				<< "I think I deserve to have some extra bacon for free.\n"
				<< "I’ve been coming for years whereas you started working "
				<< "here since last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout	<< "[ ERROR ]\n"
				<< "This is unacceptable! I want to speak to the manager now.\n"
				<< std::endl;
}
