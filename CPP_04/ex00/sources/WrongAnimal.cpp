
#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (this != &copy)
        this->type = copy.type;
    std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called for " << this->type << std::endl;
}

std::string WrongAnimal::getType() const 
{
    return type;
}

void    WrongAnimal::makeSound() const 
{
    std::cout << CYAN << type << " makes random animal sound!" << RESET << std::endl;
}