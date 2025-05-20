/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:21:34 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/20 13:58:24 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Animal: Default constructor called" << std::endl;
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
    std::cout << "Animal: Destructor called for " << _type << std::endl;
}

std::string Animal::getType() const 
{
    return _type;
}
