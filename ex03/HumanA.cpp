/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:39:34 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/16 08:27:17 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon_type) : _name(name), _weapon(weapon_type)
{
	
}

HumanA::~HumanA(void)
{
	
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
