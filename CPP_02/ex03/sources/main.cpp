/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:21:04 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/20 12:21:06 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int main(void) 
{
	Point a(0.f, 0.f);
	Point b(10.f, 30.f);
	Point c(20.f, 0.f);
	std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
	std::cout << "b: " << b.getX() << ", " << b.getY() << std::endl;
	std::cout << "c: " << c.getX() << ", " << c.getY() << std::endl;	

	Point p(10.f, 15.f);
	std::string answer = bsp(a, b, c, p) ? "inside" : "outside";
	std::cout << "p: " << p.getX() << " " << p.getY() << " is " << answer << std::endl;	

	Point p2(0.f, 15.f);
	answer = bsp(a, b, c, p2) ? "inside" : "outside";
	std::cout << "p: " << p2.getX() << ", " << p2.getY() << " is " << answer << std::endl;	

	return 0;
}
