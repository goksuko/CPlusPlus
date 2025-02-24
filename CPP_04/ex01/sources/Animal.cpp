
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal: Parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    this->type = copy.type;
    std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
        this->type = copy.type;
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called for " << this->type << std::endl;
}

std::string Animal::getType() const 
{
    return type;
}

void    Animal::makeSound() const 
{
    std::cout << CYAN << type << " makes random animal sound!" << RESET << std::endl;
}
