/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:04:41 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 16:17:39 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef TEMPLATE_H
# define TEMPLATE_H
# include <iostream>

class Template
{

public:

	Template(void);
	Template(int value);
	~Template(void);

	void				setValue(int value);
	int					getValue(void) const;
	void				setName(std::string name);
	std::string	const & getName(void) const;
	
private:

	int			_value;
	std::string	_name;
};

#endif