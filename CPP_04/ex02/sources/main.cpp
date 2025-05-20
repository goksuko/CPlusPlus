/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:21:49 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 18:10:14 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"

#define TOTAL_ANIMALS 6


int main()
{
	// You cannot use an abstract class as a parameter type, a function return type, or the type of an explicit conversion, 
	// nor can you declare an object of an abstract class. 
	// Animal test; // this cannot be done because Animal is an abstract class

	// You can, however, declare pointers and references to an abstract class.
	Animal *test = new Dog();
	std::cout << CYAN << test->getType() << RESET<< std::endl;
	test->makeSound();
	
	delete test;
	return (0);
}