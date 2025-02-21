#ifndef __POINT_H__
# define __POINT_H__

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point();
		Point(float const x, float const y);
		Point(const Point &copy);
		Point &operator = (const Point &copy);
		~Point();

		float getX(void) const;
		float getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif