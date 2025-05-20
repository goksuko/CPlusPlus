/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:21:02 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 17:37:28 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

Dog::Dog()
{
	_type = "Dog";
	brain = new Brain();
    std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
        brain = new Brain(*copy.brain);
    }
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog: Destructor called for " << _type << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << CYAN << _type << " barks!" << RESET << std::endl;
}

Brain *Dog::getBrain() const
{
	return brain;
}

void Dog::addIdea(std::string idea)
{
	brain->addIdea(idea);
}

std::string Dog::getIdea(int index) const
{
	return brain->getIdea(index);
}