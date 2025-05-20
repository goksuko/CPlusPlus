/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:20:03 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 14:55:01 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << YELLOW << "Animal: Default constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << "Animal: Parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
	std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
        _type = copy._type;
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
	std::cout << YELLOW << "Animal: Destructor called for " << _type << RESET << std::endl;
}

std::string Animal::getType() const 
{
    return _type;
}

void    Animal::makeSound() const 
{
    std::cout << YELLOW << _type << " makes random animal sound!" << RESET << std::endl;
}