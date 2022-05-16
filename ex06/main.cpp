/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:16:06 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/16 08:49:40 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{

	if (argc == 1)
	{
		std::cout << "Program needs one argument!\n";
		return (-1);
	}
	Karen	karen;
	karen.complain(argv[1]);
	return (0);
}
