/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:39:08 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/01/10 11:33:41 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream> // for std::cout, std::cin
# include <cstring> // for std::strlen
# include <cstdio> // for std::printf
# include <cctype> // for std::isdigit
# include <algorithm> // for std::all_of
# include <iomanip> // for std::setw
# include <string> // for std::string

class Contact
{
    public:
        Contact(void); // Default Constructor
        Contact(std::string &new_first, std::string &new_last, \
        std::string &new_nick, std::string &new_number, std::string &new_secret); // Parameterized Constructor
            
        void		print_blocks(void);
        std::string	get_firstname(void);
        std::string	get_lastname(void);
        std::string	get_nickname(void);
        
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
};

void	print_dot(std::string);

#endif


// - **Default Constructor**: Initializes member variables to their default values. Used when no initial values are provided.
// - **Parameterized Constructor**: Initializes member variables with specific values provided as arguments. Used when you want to set initial values at the time of object creation.

// By providing both constructors, the Contact class allows for flexible object creation, accommodating different use cases and initialization requirements.