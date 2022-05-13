/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:13:26 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 11:50:26 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon
{

public:

	Weapon(std::string type);
	~Weapon(void);
	
	std::string const &	getType(void) const;
	void				setType(std::string newType);
	
private:

	std::string	_type;
};

#endif