/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:20:19 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 15:25:32 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << CYAN << "Dog: Default constructor called" << RESET << std::endl;
}

Dog::Dog(std::string type)
{
	_type = type;
	std::cout << CYAN << "Dog: Parameterized constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
    if (this != &copy)
	{
        Animal::operator=(copy);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << CYAN << "Dog: Destructor called for " << _type << RESET << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << CYAN << _type << " barks!" << RESET << std::endl;
}