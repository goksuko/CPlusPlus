/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:20:24 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/20 12:20:26 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>
# include <cmath>

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

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLDBLACK   "\033[1m\033[30m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDYELLOW  "\033[1m\033[33m"
#define BOLDBLUE    "\033[1m\033[34m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"

class Fixed
{
	private:
		int                 __fixedPointValue;
		static const int    __fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		Fixed& operator = (const Fixed& copy);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif