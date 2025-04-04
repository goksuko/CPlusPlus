/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:20:32 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/20 12:20:33 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main(void) {
	std::cout << BLUE << "Fixed a" << std::endl;
	Fixed a;
	std::cout << "Fixed const b(10)" << std::endl;
	Fixed const b(10);
	std::cout << "Fixed const c(42.42f)" << std::endl;
	Fixed const c(42.42f);
	std::cout << "Fixed const d(b)" << std::endl;
	Fixed const d(b);

	std::cout << "a = Fixed(1234.4321f)" << RESET << std::endl;
	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << BLUE << "-------------------" << std::endl;

	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	std::cout << "a is " << a.getRawBits() << " as raw bits" << std::endl;
	std::cout << "b is " << b.getRawBits() << " as raw bits" << std::endl;
	std::cout << "c is " << c.getRawBits() << " as raw bits" << std::endl;
	std::cout << "d is " << d.getRawBits() << " as raw bits" << std::endl;

	std::cout << BLUE << "-------------------" << RESET << std::endl;

	
	return 0;
}
	