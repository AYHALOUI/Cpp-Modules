/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:48:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/16 21:08:15 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
		
	public:
		Point();
		Point(const Point &copy);
		Point &operator = (const Point &copy);
		~Point();

		Point(const float x, const float y);
		
		Fixed getX();
		Fixed getY();

		float getValueX();
		float getValueY();

		float calculateArea(Point const a, Point const b, Point const c);
};

#endif