/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:12:19 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/17 20:04:52 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	std::cout << "Cure: Parameterized constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	std::cout << "Cure: Copy constructor called" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(const Cure &copy)
{
	std::cout << "Cure: Copy assignment operator called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure: Destructor called" << std::endl;
}

Cure* Cure::clone() const
{
	std::cout << "Cure: Clone function called" << std::endl;
	return new Cure(*this);
}