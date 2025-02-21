#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	_fixedPointValue = copy.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed()
{
     std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixedPointValue = raw;
}