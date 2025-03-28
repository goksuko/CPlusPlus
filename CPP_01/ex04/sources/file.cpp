/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   file.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:19:25 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/28 12:48:36 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/file.hpp"

File::File(std::string filename, std::string to_rplace, std::string rplaced)
	:	__filename(filename),
		__to_rplace(to_rplace),
		__rplaced(rplaced),
		__new_file_name(filename + ".replace")
{ }

File::~File()
{ }

void File::do_replacement()
{
	std::ifstream original_file(this->__filename);
    if (!original_file.is_open()) {
		std::cerr << "Error opening file: " << this->__filename << std::endl;
        return;
    }

    std::ofstream new_file(this->__new_file_name, std::ios::trunc);
    if (!new_file.is_open()) {
        std::cerr << "Error creating file: " << this->__new_file_name << std::endl;
        return;
    }


    std::string line;
    while (std::getline(original_file, line))
    {
        size_t pos = 0;
        while (true)
        {
            size_t found = line.find(this->__to_rplace, pos); /* returns position of 1st occurence of "to_rplace" in line*/
            if (found == std::string::npos)
            {
                new_file << line.substr(pos) << '\n'; /* no more occurences of "to_rplace" in line */
                break;
            }
            new_file << line.substr(pos, found - pos) << this->__rplaced; /* another occurence, append until position then adds "rplaced"*/
            pos = found + this->__to_rplace.length(); /* pos is now after occurence of "to_rplace" rplaced by "rplaced"*/
        }
    }

    original_file.close();
    new_file.close();
    std::cout << GREEN << __new_file_name << " is ready :) Now you can open the new file!" << RESET << std::endl;
}
