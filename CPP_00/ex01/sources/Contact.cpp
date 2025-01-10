/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:39:15 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/01/10 09:58:15 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
	:	first_name(),
		last_name(),
		nick_name(),
		phone_number(),
		darkest_secret()
{ }

// Contact::Contact(void) {
//     this->first_name = "";
//     this->last_name = "";
//     this->nick_name = "";
//     this->phone_number = "";
//     this->darkest_secret = "";
// };

Contact::Contact(std::string &new_first, std::string &new_last, \
				 std::string &new_nick, std::string &new_phone, \
				 std::string &new_secret)
	:	first_name(new_first),
		last_name(new_last),
		nick_name(new_nick),
		phone_number(new_phone),
		darkest_secret(new_secret)
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
	print_dot(first_name);
	print_dot(last_name);
	print_dot(nick_name);
    std::cout << std::endl;
}

std::string	Contact::get_firstname()
{
	return (first_name);
}

std::string	Contact::get_lastname()
{
	return (last_name);
}

std::string	Contact::get_nickname()
{
	return (nick_name);
}

