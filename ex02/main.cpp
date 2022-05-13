/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:55:51 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 11:09:42 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	 main(void)
{
	std::string	my_var = "HI THIS IS BRAIN";
	std::string	*stringPTR = &my_var;
	std::string	&stringREF = my_var;

	std::cout << std::endl;
	std::cout << "The memory address of string my_var   = " << &my_var << std::endl;
	std::cout << "The memory address held by *stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by &stringREF = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string my_var     = " << my_var << std::endl;
	std::cout << "The value pointed to by *stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by &stringREF = " << stringREF << std::endl;
	std::cout << std::endl;
	
	my_var = "everything new this time!";
	std::cout << "The value of the string my_var     = " << my_var << std::endl;
	std::cout << "The value pointed to by *stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by &stringREF = " << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}
