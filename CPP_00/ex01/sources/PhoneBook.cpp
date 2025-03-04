/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:39:21 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/04 11:25:29 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
	:	_index(0),
		_contacts()
{ }

void PhoneBook::add(void)
{
	std::string first_name, last_name, nick_name, phone_number, darkest_secret;

	std::cout << "Please enter the following information to add a new contact: " << std::endl;
	first_name = enter_str("First Name: ");
	last_name = enter_str("Last Name: ");
	nick_name = enter_str("Nickname: ");
	phone_number = enter_nbr("Phone Number: ");
	darkest_secret = enter_str("Darkest Secret: ");

	Contact new_contact(first_name, last_name, nick_name, phone_number, darkest_secret);
	
	_contacts[_index] = new_contact;
	std::cout << "Contact \"" << first_name << " " << last_name << "\" created." << std::endl;
	this->_index++;
	this->_index = this->_index % 8;
}

std::string PhoneBook::check_if_empty(std::string entry, std::string info)
{
	while(entry.empty())
	{
		std::cout << "Please enter a valid input" << std::endl;
		std::cout << info;
		std::getline(std::cin, entry);
	}
	return (entry);
}

std::string PhoneBook::check_if_numeric(std::string entry, std::string info)
{
	while(entry.empty() || !std::all_of(entry.begin(), entry.end(), ::isdigit))
	{
		std::cout << "Please enter a valid input" << std::endl;
		std::cout << info;
		std::getline(std::cin, entry);
	}
	return (entry);
}

std::string PhoneBook::enter_str(std::string info)
{
	std::string entry;

	std::cout << info;
	std::getline(std::cin, entry);
	entry = check_if_empty(entry, info);
	return (entry);
}

std::string PhoneBook::enter_nbr(std::string info)
{
	std::string entry;

	std::cout << info;
	std::getline(std::cin, entry);
	entry = check_if_numeric(entry, info);
	return (entry);
}

void PhoneBook::search(int count)
{
    std::string index;
    int i;
	int id;

	id = 0;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|   Index  | Firstname| Lastname | Nickname |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (i = 0; i < count; i++)
    {
        std::cout << "|" << std::setw(10) << i + 1 << "|";
        _contacts[i].print_blocks();
    }
	if (count > 0)
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	else
	{
		std::cout << std::endl;
		std::cout << "|---        NO CONTACTS AVAILABLE        ---|" << std::endl;
		return ;
	}
	while (1)
	{
		std::cout << std::endl;
		std::cout << "Enter Index: ";
		std::getline(std::cin, index);
		index = check_if_numeric(index, "Enter Index: ");
		id = std::stoi(index);
		if (!(id >= 1 && id <= 8) || id > count)
			std::cout << "Please enter an index between 1 to " << count << std::endl;
		else
			break;
	}
    if (id >= 1)
    {
		std::cout << std::endl;
        std::cout << "~~ Index       : " << id << std::endl;
        std::cout << "~~ First Name  : " << _contacts[id - 1].get_firstname() << std::endl;
        std::cout << "~~ Last Name   : " << _contacts[id - 1].get_lastname() << std::endl;
        std::cout << "~~ Nickname    : " << _contacts[id - 1].get_nickname() << std::endl;
        std::cout << std::endl;
    }
}

void PhoneBook::exit(void)
{
	std::cout << "Exiting Phonebook" << std::endl;
}