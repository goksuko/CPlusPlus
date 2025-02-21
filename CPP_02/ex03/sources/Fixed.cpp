#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
    _fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
    _fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	_fixedPointValue = copy._fixedPointValue;
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    _fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)_fixedPointValue / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_fixedPointValue >> _fractionalBits);
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator > (const Fixed& compared) const
{
    return (_fixedPointValue > compared._fixedPointValue);
}

bool Fixed::operator < (const Fixed& compared) const
{
    return (_fixedPointValue < compared._fixedPointValue);
}

bool Fixed::operator >= (const Fixed& compared) const
{
    return (_fixedPointValue >= compared._fixedPointValue);
}

bool Fixed::operator <= (const Fixed& compared) const
{
    return (_fixedPointValue <= compared._fixedPointValue);
}

bool Fixed::operator == (const Fixed& compared) const
{
    return (_fixedPointValue == compared._fixedPointValue);
}

bool Fixed::operator != (const Fixed& compared) const
{
    return (_fixedPointValue != compared._fixedPointValue);
}

Fixed& Fixed::operator + (const Fixed& start)
{
    _fixedPointValue += start._fixedPointValue;
    return *this;
}

Fixed& Fixed::operator - (const Fixed& start)
{
    _fixedPointValue -= start._fixedPointValue;
    return *this;
}

Fixed& Fixed::operator * (const Fixed& start)
{
    _fixedPointValue = (_fixedPointValue * start._fixedPointValue) >> _fractionalBits;
    return *this;
}

Fixed& Fixed::operator / (const Fixed& start)
{
    _fixedPointValue = (_fixedPointValue << _fractionalBits) / start._fixedPointValue;
    return *this;
}

Fixed& Fixed::operator ++ (void)
{
    _fixedPointValue++;
    return *this;
}

Fixed Fixed::operator ++ (int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator -- (void)
{
    _fixedPointValue--;
    return *this;
}

Fixed Fixed::operator -- (int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}


