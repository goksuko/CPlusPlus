/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:19:31 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/28 12:49:37 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/file.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Please provide a file name, a string to replace, and another string to be replaced.\n";
		return -1;
	}
	std::string filename = argv[1];
	std::string to_rplace = argv[2];
	std::string rplaced = argv[3];
	if (filename.empty() || to_rplace.empty() || rplaced.empty())
	{
		std::cerr << "Please provide valid file name, string to replace, and another string to be replaced.\n";
		return -1;
	}
	
	File my_file = File(filename, to_rplace, rplaced);
	my_file.do_replacement();
	return 0;
}