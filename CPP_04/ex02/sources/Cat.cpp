/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:21:40 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 17:52:06 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

Cat::Cat()
{
	_type = "Cat";
	brain = new Brain();
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	_type = copy._type;
	brain = new Brain(*copy.brain);
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
        _type = copy._type;
        delete brain;
        brain = new Brain(*copy.brain);
    }
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat: Destructor called for " << _type << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << MAGENTA << _type << " meeeeoows!" << RESET << std::endl;
}

Brain *Cat::getBrain() const
{
	return brain;
}

void Cat::addIdea(std::string idea)
{
	brain->addIdea(idea);
}

std::string Cat::getIdea(int index) const
{
	return brain->getIdea(index);
}