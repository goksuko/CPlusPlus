/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:20:25 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 14:56:32 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << YELLOW << "WrongAnimal: Default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    _type = type;
    std::cout << "WrongAnimal: Parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (this != &copy)
        _type = copy._type;
    std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << YELLOW << "WrongAnimal: Destructor called for " << _type << RESET << std::endl;
}

std::string WrongAnimal::getType() const 
{
    return _type;
}

void    WrongAnimal::makeSound() const 
{
    std::cout << CYAN << _type << " makes random animal sound!" << RESET << std::endl;
}