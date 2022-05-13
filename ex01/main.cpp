/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:39:47 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 10:50:03 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*new_horde = NULL;

	new_horde = new_horde->zombieHorde(15, "Peter Pan");
	for (int i = 0; i < 15; i++)
	{
		new_horde[i].announce();
	}
	delete [] new_horde;
	return (0);
}
