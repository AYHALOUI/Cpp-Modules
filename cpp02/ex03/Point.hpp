/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:48:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/15 21:32:19 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

class Point
{
	private:
		Fixed const x;
		Fixed const y;
		
	public:
	
		Point();
		Point(const Point &copy);
		Point(const float x, const float y);
		Point &operator = (const Point &copy);
		Fixed getX(void) const;
		Fixed getY(void) const;
		~Point();

		// F operator = (const Point &copy);

		float getFloatX(void) const;
		float getFloatY(void) const;
		
		bool bsp( Point const a, Point const b, Point const c, Point const point);
};

std::ostream &operator << (std::ostream &out, const Point &point);

#endif