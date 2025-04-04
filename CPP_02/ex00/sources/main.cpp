/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:20:18 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/20 12:20:19 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	std::cout << BLUE << "-------------------" << std::endl;
	Fixed d;
	Fixed e(d);
	std::cout << "d: " << d.getRawBits() << std::endl;
	std::cout << "e: " << e.getRawBits() << std::endl;
	d.setRawBits(42);
	std::cout << "d became 42, e is not touched" << std::endl;
	std::cout << "d: " << d.getRawBits() << std::endl;
	std::cout << "e: " << e.getRawBits() << std::endl;
	std::cout << BLUE << "-------------------" << RESET << std::endl;
	return 0;
}