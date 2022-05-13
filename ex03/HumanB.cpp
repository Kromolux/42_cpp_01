/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:07:48 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 13:33:13 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	
}

HumanB::HumanB(std::string name, Weapon * weapon_type) : name(name), weapon(weapon_type)
{
	
}

HumanB::~HumanB(void)
{
	
}

void	HumanB::attack(void) const
{
	std::cout << this->name << " attacks with their ";
	if (weapon)
		std::cout << weapon->getType() << std::endl;
	else
		std::cout << "hands\n";
}

void	HumanB::setWeapon(Weapon & weapon_type)
{
	this->weapon = &weapon_type;
}
