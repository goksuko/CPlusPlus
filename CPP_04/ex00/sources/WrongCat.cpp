#include "../includes/WrongCat.hpp"
#include "../includes/Animal.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
    std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string copy)
{
	this->type = copy;
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if (this != &copy)
		this->type = copy.type;
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called for " << this->type << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << MAGENTA << type << " meeeeoows!" << RESET << std::endl;
}