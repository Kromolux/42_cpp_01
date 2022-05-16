/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:22:49 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/16 08:01:21 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*my_zombie = NULL;

	my_zombie = my_zombie->newZombie("Foo");
	my_zombie->announce();
	my_zombie->randomChump("Bar");
	delete my_zombie;
	my_zombie = my_zombie->newZombie("Rene");
	my_zombie->announce();
	my_zombie->randomChump("Joe");
	my_zombie->randomChump("Steve Jobs");
	delete my_zombie;
	return (0);
}
