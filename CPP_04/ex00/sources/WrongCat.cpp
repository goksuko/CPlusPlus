/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:20:27 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 15:05:36 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include "../includes/Animal.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
    std::cout << MAGENTA << "WrongCat: Default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	_type = type;
	std::cout << MAGENTA << "WrongCat: Parameterized constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	_type = copy._type;
	std::cout << MAGENTA << "WrongCat: Copy constructor called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if (this != &copy)
		_type = copy._type;
	std::cout << MAGENTA << "WrongCat: Copy assignment operator called" << RESET << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << MAGENTA << "WrongCat: Destructor called for " << _type << RESET << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << MAGENTA << _type << " meeeeoows!" << RESET << std::endl;
}