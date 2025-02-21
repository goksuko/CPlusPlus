#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>

// To represent -6 in 2's complement, we need to take the 2's complement of the binary representation of 6. 
// The 2's complement is calculated by two steps:

// Invert all bits (change 0 to 1 and 1 to 0).
// Add 1 to the result.

// Inverting the bits:
// Original binary of 6: 00000110
// Inverted (flip all bits): 11111001

// Adding 1:
// 11111001 + 1 = 11111010
// Thus, the 2's complement of 6 is 11111010. This represents -6 in 8-bit 2's complement.

// The binary 11111010 is the 8-bit 2's complement representation of -6.
// The leftmost bit (1) is the sign bit, indicating that this is a negative number. 
// This is a key characteristic of 2's complement: negative numbers always have a 1 in the leftmost bit.
// The remaining bits (11111010) represent the magnitude of the number after taking the 2's complement, which corresponds to -6.

// https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html
// https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html
// https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html

class Fixed
{
	private:
		int                 _fixedPointValue;
		static const int    _fractionalBits = 8;

	public:
		// Default constructor
		Fixed();

		// Copy constructor
		Fixed(const Fixed& copy);

		// Copy assignment operator overload
		Fixed& operator = (const Fixed& copy);

		// Destructor
		~Fixed();

		// Member function to get the raw bits (the integer value of the fixed-point number)
		int getRawBits(void) const;

		// Member function to set the raw bits (the integer value of the fixed-point number)
		void setRawBits(int const raw);
};

#endif