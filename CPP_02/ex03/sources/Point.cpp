/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:21:07 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/20 12:21:09 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point() : __x(0), __y(0)
{
}

Point::Point(float const x, float const y) : __x(x), __y(y)
{
}

Point::Point(const Point &copy) : __x(copy.__x), __y(copy.__y)
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
	return (__x.toFloat());
}

float Point::getY(void) const
{
	return (__y.toFloat());
}
