/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   file.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:19:20 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/28 12:48:36 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>
# include <sstream>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"

class File
{
	public:
		File(std::string filename, std::string to_rplace, std::string rplaced);
		~File();

		void do_replacement();

	private:
		std::string __filename;
		std::string __to_rplace;
		std::string __rplaced;
		std::string __new_file_name;
};

#endif