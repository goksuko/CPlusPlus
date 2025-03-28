/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:42 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/17 21:22:10 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int main()
{
	std::cout << MAGENTA << "str = HI THIS IS BRAIN" << std::endl;
	std::string str = "HI THIS IS BRAIN";
	std::cout << CYAN << "*stringPTR = &str" << std::endl;
	std::string *stringPTR = &str;
	std::cout << YELLOW << "&stringREF = str" << std::endl;
	std::string &stringREF = str;

	std::cout << BOLDMAGENTA << "Address in memory of the string   : " << &str << std::endl;
	std::cout << BOLDCYAN << "Address in memory of the stringPTR: " << stringPTR << std::endl;
	std::cout << BOLDYELLOW << "Address in memory of the stringREF: " << &stringREF << std::endl;

	std::cout << MAGENTA << "str        : " << str << std::endl;
	std::cout << CYAN << "*stringPTR : " << *stringPTR << std::endl;
	std::cout << YELLOW << "stringREF  : " << stringREF << std::endl;

	std::cout << RESET << std::endl;

	return 0;
}
