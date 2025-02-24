#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

Dog::Dog()
{
	this->type = "Dog";
    std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->type = copy.type;
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
        this->type = copy.type;
    }
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called for " << this->type << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << CYAN << type << " barks!" << RESET << std::endl;
}