/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:34:02 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/16 08:27:00 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"
# include <iostream>

class HumanA
{

public:

	HumanA(std::string name, Weapon & weapon_type);
	~HumanA(void);

	void		attack(void) const;

private:

	std::string	_name;
	Weapon		&_weapon;
};

#endif