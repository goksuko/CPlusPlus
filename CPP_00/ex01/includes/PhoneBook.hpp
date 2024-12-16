/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:39:11 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:39:13 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		void	add(void);
		void	search(int count);
		void	exit(void);
		std::string	enter_str(std::string info);
		std::string	enter_nbr(std::string info);
		std::string	check_if_empty(std::string info, std::string entry);
		std::string check_if_numeric(std::string info, std::string entry);


	private:
		int 	index;
		Contact contacts[8];
};

#endif