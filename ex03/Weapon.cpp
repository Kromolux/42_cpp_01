/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:13:38 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 11:50:45 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(void)
{

}

std::string const &	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}
