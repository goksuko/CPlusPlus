#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = value << _fractionalBits;
}

//1. **Bit Shifting**: The expression `(1 << _fractionalBits)` is a bit shift operation. 
// It shifts the number `1` to the left by `_fractionalBits` positions. 
// This is equivalent to multiplying `1` by `2` raised to the power of `_fractionalBits`. 
// For example, if `_fractionalBits` is 8, then `(1 << 8)` equals 256.

// 2. **Multiplication**: The value is then multiplied by this result. 
// If `value` is `1234.4321f` and `_fractionalBits` is 8, the multiplication would be:
//    1234.4321f * 256 = 316415.8336

// 3. **Rounding**: The `roundf` function rounds the result to the nearest integer. 
// So, `316415.8336` would be rounded to `316416`.

// 4. **Assignment**: The rounded value is then assigned to `_fixedPointValue`.

// The reason you see `1234.43` instead of `1234.4321` is due to the rounding and the precision limits of floating-point arithmetic. 
// When you convert back from the fixed-point representation to a floating-point number, you might lose some precision.

// To convert back, you would typically divide by `(1 << _fractionalBits)`:
// float originalValue = _fixedPointValue / (float)(1 << _fractionalBits);

// If `_fixedPointValue` is `316416` and `_fractionalBits` is 8:
// originalValue = 316416 / 256.0f = 1234.4375

// This result is close to `1234.43` but not exactly `1234.4321` due to the rounding step.

// ### Summary
// - **Bit shifting** is used to scale the floating-point value to an integer representation.
// - **Rounding** ensures the value is an integer.
// - Precision loss occurs during the conversion and rounding steps, leading to slight differences in the final value.

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	_fixedPointValue = copy._fixedPointValue;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed()
{
     std::cout << "Destructor called" << std::endl;
}

// public member functions
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

float Fixed::toFloat(void) const
{
    return ((float)_fixedPointValue / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_fixedPointValue >> _fractionalBits);
}

// non-member functions
std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}