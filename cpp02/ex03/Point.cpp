/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:48:52 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/16 21:26:38 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{
	
}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point& Point::operator = (const Point &copy)
{
	if (this == &copy)
		return (*this);
	// this->x = copy.x;
	// this->y = copy.y;
	return (*this);
}

Point::Point(const float x, const float y):x(x), y(y)
{
	
}



Point::~Point()
{
	
}

// getters and setters
Fixed Point::getX()
{
	return (this->x);
}

Fixed Point::getY()
{
	return (this->x);
}

float Point::getValueX()
{
	return (this->x.toFloat());
}

float Point::getValueY()
{
	return (this->y.toFloat());
}

float Point::calculateArea(Point const a, Point const b, Point const c)
{
	// float area = (a.x.toFloat() * (b.y.toFloat() - c.y.toFloat()) + b.x.toFloat() * (c.y.toFloat() - a.y.toFloat()) + c.x.toFloat() * (a.y.toFloat() - b.y.toFloat())) / 2;
	float area = 0;
	std::cout << "Point a: " << a.x.toFloat() << ", " << a.y.toFloat() << std::endl;
	std::cout << "Point b: " << b.x.toFloat() << ", " << b.y.toFloat() << std::endl;
	std::cout << "Point c: " << c.x.toFloat() << ", " << c.y.toFloat() << std::endl;
	return (area);
}

// bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
// {
// 	float area = calculateArea(a, b, c);
// 	float area1 = calculateArea(point, b, c);
// 	float area2 = calculateArea(a, point, c);
// 	float area3 = calculateArea(a, b, point);
// 	if (area == area1 + area2 + area3)
// 		return (true);
// 	return (false);
// }

