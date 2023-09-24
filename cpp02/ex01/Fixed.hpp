/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:44:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/24 11:45:10 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int myFixedPoint;
		const static int _fractionalBits;
		
	public:
		//
		Fixed(const int fixedPoint);
		Fixed(const float floatingPoint);
		
		// Orthodox Canonical Form
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator = (const Fixed &copy);
		~Fixed();

		// getters and setters
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		// Converting to Int and Tofloat functions
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream &operator << (std::ostream &out, const Fixed &fixed);
#endif