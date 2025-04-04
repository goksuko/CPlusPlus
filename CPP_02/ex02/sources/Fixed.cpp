/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:20:42 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/04 10:23:28 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
    __fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
    __fixedPointValue = value << __fractionalBits;
}

Fixed::Fixed(const float value)
{
    __fixedPointValue = roundf(value * (1 << __fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	__fixedPointValue = copy.__fixedPointValue;
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return (__fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    __fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)__fixedPointValue / (1 << __fractionalBits));
}

int Fixed::toInt(void) const
{
    return (__fixedPointValue >> __fractionalBits);
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator > (const Fixed& compared) const
{
    return (__fixedPointValue > compared.__fixedPointValue);
}

bool Fixed::operator < (const Fixed& compared) const
{
    return (__fixedPointValue < compared.__fixedPointValue);
}

bool Fixed::operator >= (const Fixed& compared) const
{
    return (__fixedPointValue >= compared.__fixedPointValue);
}

bool Fixed::operator <= (const Fixed& compared) const
{
    return (__fixedPointValue <= compared.__fixedPointValue);
}

bool Fixed::operator == (const Fixed& compared) const
{
    return (__fixedPointValue == compared.__fixedPointValue);
}

bool Fixed::operator != (const Fixed& compared) const
{
    return (__fixedPointValue != compared.__fixedPointValue);
}

Fixed Fixed::operator + (const Fixed& start) const
{
	return Fixed(this->toFloat() + start.toFloat());
}

Fixed Fixed::operator - (const Fixed& start) const
{
	return Fixed(this->toFloat() - start.toFloat());
}

Fixed Fixed::operator * (const Fixed& start) const
{
	return Fixed(this->toFloat() * start.toFloat());
}

Fixed Fixed::operator / (const Fixed& start) const
{
	return Fixed(this->toFloat() / start.toFloat());
}

Fixed& Fixed::operator ++ (void) // preincrement
{
    __fixedPointValue++;
    return *this;
}

Fixed Fixed::operator ++ (int) // postincrement
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator -- (void) // predecrement
{
    __fixedPointValue--;
    return *this;
}

Fixed Fixed::operator -- (int) // postdecrement
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


