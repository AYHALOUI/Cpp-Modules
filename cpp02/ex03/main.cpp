/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:18 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/16 21:27:32 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	std::cout << "**************************\n";
	std::cout << "**********EX03***********\n";
	std::cout << "**************************\n";

	// Point p;
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	std::cout << "Point a: " << a << std::endl;
	std::cout << a.getValueX() << std::endl;
	std::cout << a.getValueY() << std::endl;
	std::cout << "Point b: " << b << std::endl;
	std::cout << b.getValueX() << std::endl;
	std::cout << b.getValueY() << std::endl;
	std::cout << "Point c: " << c << std::endl;
	std::cout << c.getValueX() << std::endl;
	std::cout << c.getValueY() << std::endl;
	// float area = a.calculateArea(a, b, c);
	// std::cout << "Area: " << area << std::endl;
	// check if the point is inside the triangle
	// Point a(0.0f, 0.0f);
	// Point b(10.0f, 0.0f);
	// Point c(0.0f, 30.0f);
	// Point point(100.f, 100.0f);
	// std::cout << "Point a: " << a << std::endl;
	// std::cout << "Point b: " << b << std::endl;
	// std::cout << "Point c: " << c << std::endl;

	// std::cout << "Point to check: " << point << std::endl;
	// if (a.bsp(a, b, c, point))
	// 	std::cout << "Point is inside the triangle\n";
	// else
	// 	std::cout << "Point is outside the triangle\n";
	
	return (0);
}