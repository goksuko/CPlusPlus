/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:20:38 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/04 10:23:18 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>
# include <cmath>

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

		bool operator > (const Fixed& compared) const;
		bool operator < (const Fixed& compared) const;
		bool operator >= (const Fixed& compared) const;
		bool operator <= (const Fixed& compared) const;
		bool operator == (const Fixed& compared) const;
		bool operator != (const Fixed& compared) const;

		Fixed operator+(const Fixed& start) const;
		Fixed operator-(const Fixed& start) const;
		Fixed operator*(const Fixed& start) const;
		Fixed operator/(const Fixed& start) const;

		Fixed& operator ++ (void); // preincrement
		Fixed operator ++ (int); // postincrement
		Fixed& operator -- (void); // predecrement
		Fixed operator -- (int); // postdecrement

		static Fixed& max(Fixed& a, Fixed& b);
		static Fixed& min(Fixed& a, Fixed& b);

		static const Fixed& max(const Fixed& a, const Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);

		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif