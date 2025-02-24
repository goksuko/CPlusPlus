#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
    std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
        this->type = copy.type;
        delete this->brain;
        this->brain = new Brain(*copy.brain);
    }
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog: Destructor called for " << this->type << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << CYAN << type << " barks!" << RESET << std::endl;
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