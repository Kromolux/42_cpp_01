/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:51:20 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 17:17:23 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef KAREN_H
# define KAREN_H
# include <iostream>

class Karen
{

public:

	Karen(void);
	~Karen(void);

	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif