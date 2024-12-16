/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:39:18 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:39:20 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>

int	main()
{
	PhoneBook	phonebook;
	std::string	command;
	int			count;

	count = 0;
	while (1)
	{
		std::cout << "\nPlease enter a command: (ADD, SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			phonebook.add();
			count++;
		}
		else if (command == "SEARCH")
		{
			if (count > 8)
				count = 8;
			phonebook.search(count);
		}
		else if (command == "EXIT")
		{
			phonebook.exit();
			break;
		}
		else
			std::cout << "Please enter a valid command (ADD, SEARCH or EXIT)" << std::endl;
	}
	return (0);
}
