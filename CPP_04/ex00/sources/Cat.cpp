#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

Cat::Cat()
{
	this->type = "Cat";
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->type = copy.type;
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        Animal::operator=(copy);
        this->type = copy.type;
    }
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called for " << this->type << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << MAGENTA << type << " meeeeoows!" << RESET << std::endl;
}