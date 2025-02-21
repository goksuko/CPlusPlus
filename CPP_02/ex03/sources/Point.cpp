#include "../includes/Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
}

Point &Point::operator = (const Point &copy)
{
	if (this != &copy)
	{
	}
    return *this;
}

Point::~Point()
{
}

float Point::getX(void) const
{
	return (_x.toFloat());
}

float Point::getY(void) const
{
	return (_y.toFloat());
}
