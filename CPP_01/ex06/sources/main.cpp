/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:20:00 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/20 12:20:02 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Please provide a level.\n";
		return -1;
	}
	std::string level_name = argv[1];

    Harl    harl;
    
    harl.complain(level_name);
    return 0;
}