/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:43:39 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/13 16:18:14 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"

static void	error_arguments(void);
static void	error_fileinput(std::string filename);
static void	error_fileoutput(std::string filename);
std::string	get_filecontent(std::ifstream &input_file);

int	main(int argc, char **argv)
{
	if (argc != 4)
		error_arguments();
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	input_file(filename.c_str());
	if (!input_file.is_open())
		error_fileinput(filename);
	std::string		filename_out = filename + ".replace";
	std::ofstream	output_file(filename_out.c_str());
	if (!output_file.is_open())
		error_fileoutput(filename_out);
	std::string	string_tmp = get_filecontent(input_file);
	size_t	pos;
	do
	{
		pos = string_tmp.find(s1);
		if (pos != std::string::npos)
		{
			string_tmp.erase(pos, s1.length());
			string_tmp.insert(pos, s2);
		}
	} while (pos != std::string::npos);
	output_file << string_tmp;
	output_file.close();
	return (0);
}

std::string	get_filecontent(std::ifstream &input_file)
{
	input_file.seekg(0 ,input_file.end);
	int	length = input_file.tellg();
	input_file.seekg(0, input_file.beg);
	char	*buffer = new char [length + 1];
	input_file.read(buffer, length);
	buffer[length] = '\0';
	input_file.close();
	std::string	tmp = buffer;
	delete [] buffer;
	return (tmp);
}

static void	error_arguments(void)
{
	std::cout	<< COLOR_RED
				<< "Error!\n" << COLOR_DEFAULT
				<< "Programm needs 3 arguments\n"
				<< "<filename> <search_string> <replace_string>\n";
	exit(-1);
}

static void	error_fileinput(std::string filename)
{
	std::cout	<< COLOR_RED
				<< "Error!\n" << COLOR_DEFAULT
				<< "Could not open inputfile " << filename << std::endl;
	exit(-1);
}

static void	error_fileoutput(std::string filename)
{
	std::cout	<< COLOR_RED
				<< "Error!\n" << COLOR_DEFAULT
				<< "Could not open outputfile " << filename << std::endl;
	exit(-1);
}
