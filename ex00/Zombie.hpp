/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:22:58 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 11:21:20 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{

public:

	Zombie(std::string name);
	~Zombie(void);
	
	void	announce( void ) const;
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );

private:

	std::string	_name;
};

#endif