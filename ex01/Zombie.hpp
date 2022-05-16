/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:32:34 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 10:49:12 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{

public:

	Zombie(void);
	~Zombie(void);
	
	void	announce( void );
	Zombie* zombieHorde( int N, std::string name );

private:

	std::string	_name;
};

#endif