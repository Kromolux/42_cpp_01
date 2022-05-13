/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:04:30 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 16:17:21 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

Template::Template(void)
{
	this->_value = 0;
}

Template::Template(int value)
{
	this->_value = value;
}

Template::~Template(void)
{

}

void	Template::setValue(int value)
{
	this->_value = value;
}

int	Template::getValue(void) const
{
	return (this->_value);
}

void	Template::setName(std::string name)
{
	this->_name = name;
}

std::string const & Template::getName(void) const
{
	return (this->_name);
}
