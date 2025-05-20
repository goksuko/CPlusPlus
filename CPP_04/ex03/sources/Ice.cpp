/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:12:22 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/17 20:05:11 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	std::cout << "Ice: Parameterized constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "Ice: Copy constructor called" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(const Ice &copy)
{
	std::cout << "Ice: Copy assignment operator called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice: Destructor called" << std::endl;
}

Ice* Ice::clone() const
{
	std::cout << "Ice: Clone function called" << std::endl;
	return new Ice(*this);
}