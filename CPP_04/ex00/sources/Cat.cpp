/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:20:06 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 15:25:42 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

Cat::Cat()
{
	_type = "Cat";
    std::cout << MAGENTA << "Cat: Default constructor called" << RESET << std::endl;
}

Cat::Cat(std::string type)
{
	_type = type;
	std::cout << MAGENTA << "Cat: Parameterized constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
	{
        Animal::operator=(copy);
	}
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << MAGENTA << "Cat: Destructor called for " << _type << RESET << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << MAGENTA << _type << " meeeeoows!" << RESET << std::endl;
}