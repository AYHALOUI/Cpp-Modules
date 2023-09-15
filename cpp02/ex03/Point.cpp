/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:48:52 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/15 21:45:50 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point():x(0), y(0)
{

}

Point::Point(const Point &copy):x(copy.x), y(copy.y)
{
	
}

Point::Point(const float x, const float y):x(x), y(y)
{
	
}



// Point &Point::operator = (const Point &copy)
// {
// 	if (this == &copy)
// 		return (*this);
// 	this->x = copy.x;
// 	this->y = copy.y;
// 	return (*this);
// }

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}

float Point::getFloatX(void) const
{
	return (this->x.toFloat());
}

float Point::getFloatY(void) const
{
	return (this->y.toFloat());
}

float calculateArea(Point const a, Point const b, Point const c)
{
	float area = 1/2 * (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()));
	return (area); 
}
bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
	(void)a;
	(void)b;
	(void)c;
	(void)point;
	float area = calculateArea(a, b, c);
	std::cout << "==> area: " << area << std::endl;
	// float area1 = calculateArea(point, b, c);
	// float area2 = calculateArea(a, point, c);
	// float area3 = calculateArea(a, b, point);
	// if (area == area1 + area2 + area3)
	// {
	// 	std::cout << "area: " << area << std::endl;
	// 	return (true);
	// }
	return (false);
}

std::ostream &operator << (std::ostream &out, const Point &point)
{
	out << "Point(" << point.getX() << ", " << point.getY() << ")";
	return (out);
}

Point::~Point()
{
	
}