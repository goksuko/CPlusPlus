#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
        this->type = copy.type;
        delete this->brain;
        this->brain = new Brain(*copy.brain);
    }
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat: Destructor called for " << this->type << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << MAGENTA << type << " meeeeoows!" << RESET << std::endl;
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