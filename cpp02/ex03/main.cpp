/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:18 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/15 21:37:11 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	std::cout << "**************************\n";
	std::cout << "**********EX03***********\n";
	std::cout << "**************************\n";
	// check if the point is inside the triangle
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(0.0f, 30.0f);
	Point point(100.f, 100.0f);
	std::cout << "Point a: " << a << std::endl;
	std::cout << "Point b: " << b << std::endl;
	std::cout << "Point c: " << c << std::endl;

	std::cout << "Point to check: " << point << std::endl;
	if (a.bsp(a, b, c, point))
		std::cout << "Point is inside the triangle\n";
	else
		std::cout << "Point is outside the triangle\n";
	
	return (0);
}