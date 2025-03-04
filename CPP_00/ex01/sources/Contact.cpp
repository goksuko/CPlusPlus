/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:39:15 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/04 11:25:56 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
	:	_first_name(),
		_last_name(),
		_nick_name(),
		_phone_number(),
		_darkest_secret()
{ }

Contact::Contact(std::string &new_first, std::string &new_last, \
				 std::string &new_nick, std::string &new_phone, \
				 std::string &new_secret)
	:	_first_name(new_first),
		_last_name(new_last),
		_nick_name(new_nick),
		_phone_number(new_phone),
		_darkest_secret(new_secret)
{ }

void print_dot(std::string info)
{
	if (info.length() > 10)
		std::cout << std::setw(9) << std::right << info.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << std::right << info.substr(0, 10) << "|";
}

void Contact::print_blocks()
{
	print_dot(_first_name);
	print_dot(_last_name);
	print_dot(_nick_name);
    std::cout << std::endl;
}

std::string	Contact::get_firstname()
{
	return (_first_name);
}

std::string	Contact::get_lastname()
{
	return (_last_name);
}

std::string	Contact::get_nickname()
{
	return (_nick_name);
}

