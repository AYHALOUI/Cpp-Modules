/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:44:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/16 20:45:30 by ahaloui          ###   ########.fr       */
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
		int fixedPoint;
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
		
		// The 6 comparison operators: >, <, >=, <=, == and !=.
		bool operator > (const Fixed &fixed) const;
		bool operator < (const Fixed &fixed) const;
		bool operator >= (const Fixed &fixed) const;
		bool operator <= (const Fixed &fixed) const;
		bool operator == (const Fixed &fixed) const;
		bool operator != (const Fixed &fixed) const;
		
		//The 4 arithmetic operators: +, -, *, and /.
		Fixed operator + (const Fixed &fixed) const;
		Fixed operator - (const Fixed &fixed) const;
		Fixed operator * (const Fixed &fixed) const;
		Fixed operator / (const Fixed &fixed) const;
		
		///The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators:
		Fixed &operator ++ (void);
		Fixed operator ++ (int);
		Fixed &operator -- (void);
		Fixed operator -- (int);
		
		// the 4 min and max functions
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};
std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif