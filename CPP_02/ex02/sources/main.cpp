/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:20:45 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/04 10:27:19 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "a" << std::endl;
	std::cout << a << std::endl;
	std::cout << "++a" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "a" << std::endl;
	std::cout << a << std::endl;
	std::cout << "a++" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a" << std::endl;
	std::cout << a << std::endl;
	std::cout << "b" << std::endl;
	std::cout << b << std::endl;
	std::cout << "Fixed::max(a, b)" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "Fixed::min(a, b)" << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << "a + b" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << "a - b" << std::endl;
	std::cout << a - b << std::endl;
	std::cout << "a * b" << std::endl;
	std::cout << a * b << std::endl;
	std::cout << "a / b" << std::endl;
	std::cout << a / b << std::endl;
	std::cout << "a == b" << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << "a != b" << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << "a > b" << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << "a < b" << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << "a >= b" << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << "a <= b" << std::endl;
	std::cout << (a <= b) << std::endl;
	return 0;
}
	

// int main(void) 
// {
// 	Fixed a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2));
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max(a, b) << std::endl;
// 	return 0;
// 	}