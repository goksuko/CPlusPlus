/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:20:55 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/20 12:20:56 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
# define __POINT_H__

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed __x;
		const Fixed __y;

	public:
		Point();
		Point(float const x, float const y);
		Point(const Point &copy);
		Point &operator = (const Point &copy);
		~Point();

		float getX(void) const;
		float getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif