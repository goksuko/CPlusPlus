/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:42 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/01/11 17:02:18 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::cout << "str = HI THIS IS BRAIN" << std::endl;
	std::string str = "HI THIS IS BRAIN";
	std::cout << "*stringPTR = &str" << std::endl;
	std::string *stringPTR = &str;
	std::cout << "&stringREF = str" << std::endl;
	std::string &stringREF = str;

	std::cout << "Address in memory of the string   : " << &str << std::endl;
	std::cout << "Address in memory of the stringPTR: " << stringPTR << std::endl;
	std::cout << "Address in memory of the stringREF: " << &stringREF << std::endl;

	std::cout << "str       : " << str << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;

	return 0;
}
