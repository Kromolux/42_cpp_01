/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:52:06 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/16 08:27:05 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"
# include <iostream>

class HumanB
{

public:

	HumanB(std::string name);
	HumanB(std::string name, Weapon * weapon_type);
	~HumanB(void);

	void		attack(void) const;
	void		setWeapon(Weapon & weapon_type);
	
private:

	std::string	_name;
	Weapon		*_weapon;
	
};

#endif