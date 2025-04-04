/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:20:59 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/20 12:21:00 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"	
#include "../includes/Fixed.hpp"

// Binary space partitioning (BSP) is a method for recursively subdividing a space into convex sets by using hyperplanes as partitions.
// This is done by associating a half-space with each hyperplane, where the half-space contains the convex set.
// Points are then classified with respect to the hyperplane based on which side of the hyperplane they lie on.
// The result of the classification is used to determine which partition to search next.
// The algorithm is used in computer graphics for rendering scenes with complex geometry, such as those in video games.
// The algorithm is also used in computer-aided design (CAD) for rendering 3D models.
// The algorithm is used in robotics for path planning and obstacle avoidance.
// The algorithm is used in geographic information systems (GIS) for spatial analysis and map overlay.
// The algorithm is used in computational geometry for solving problems related to geometric objects.
// The algorithm is used in machine learning for classification and clustering tasks.
// The algorithm is used in computer vision for object detection and recognition.
// The algorithm is used in data mining for association rule learning and anomaly detection.
// The algorithm is used in bioinformatics for sequence alignment and protein structure prediction.
// The algorithm is used in natural language processing for part-of-speech tagging and named entity recognition.
// The algorithm is used in signal processing for image compression and speech recognition.
// The algorithm is used in financial modeling for risk assessment and portfolio optimization.
// The algorithm is used in game theory for equilibrium analysis and strategy selection.
// The algorithm is used in operations research for resource allocation and scheduling.
// The algorithm is used in optimization for solving linear programming and integer programming problems.
// The algorithm is used in simulation for modeling complex systems and predicting outcomes.
// The algorithm is used in control theory for stabilizing unstable systems and tracking reference signals.
// The algorithm is used in robotics for motion planning and trajectory generation.
// The algorithm is used in computer vision for object tracking and pose estimation.

// bool bsp(Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed result = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
// 	Fixed result2 = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX());
// 	Fixed result3 = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX());

// 	if (result >= 0 && result2 >= 0 && result3 >= 0)
// 		return true;
// 	if (result <= 0 && result2 <= 0 && result3 <= 0)
// 		return true;
// 	return false;
// }

float area(const Point& a, const Point& b, const Point& c)
{
	float x1, y1;						
	float x2, y2;						
	float x3, y3;						

	x1 = a.getX();			
	y1 = a.getY();			
	x2 = b.getX();			
	y2 = b.getY();			
	x3 = c.getX();			
	y3 = c.getY();			

	return std::abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A = area(a, b, c);			// Calculate area of ABC
	float A1 = area(point, b, c);		// Calculate area of PBC
	float A2 = area(a, point, c);		// Calculate area of APC
	float A3 = area(a, b, point);		// Calculate area of ABP
	return (A == A1 + A2 + A3);			// Calculate if A = A1 + A2 + A3
}

/*	If the sum of the areas of the three triangles is equal to the area of triangle ABC, 
	then point P is inside the triangle, otherwise it is outside.

	The area of the triangle is calculated by the formula:
	Area = [x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)] / 2 
	if A(1,2) B(3,4) C(5,1) then the area is -5, and the abs is 5.
	The negative sign indicates that we've calculated the area in the 
	opposite direction if the clockwise direction.
	To obtain the real area, we need to multiply by -1.	*/