/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Materia.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:12:29 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 18:01:31 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Materia.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria: Parameterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria: Copy constructor called" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria: Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria: Destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return _type;
}

// object of abstract class type "AMateria" is not allowed
// AMateria* clone = new AMateria(*this);
AMateria* AMateria::clone() const
{
	std::cout << "AMateria: Clone function called" << std::endl;
	return NULL;
}

void AMateria::use(ICharacter& target)
{
	if (target.getName() == "")
	{
		std::cout << "AMateria: Use function called" << std::endl;
		std::cout << "Invalid target" << std::endl;
		return;
	}
	if (_type == "ice")
		std::cout << CYAN << " * shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
	else if (_type == "cure")
		std::cout << CYAN << " * heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}

