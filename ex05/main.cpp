/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:04:18 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/14 14:06:57 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	karen.complain("INFO");
	karen.complain("DEBUG");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("");
	karen.complain("HELP");
	return (0);
}
