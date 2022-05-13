/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:39:34 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 13:34:17 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon_type) : name(name), weapon(weapon_type)
{
	
}

HumanA::~HumanA(void)
{
	
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
