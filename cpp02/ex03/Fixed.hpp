/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:44:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/15 21:30:31 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int fixedPoint;
		const static int _fractionalBits;
		
	public:
		Fixed();
		//
		Fixed(const int fixedPoint);
		Fixed(const float floatingPoint);
		//
		Fixed(const Fixed &copy);
		Fixed &operator = (const Fixed &copy);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		//
		float toFloat( void ) const;
		int toInt( void ) const;
		//		
		bool operator > (const Fixed &fixed) const;
		bool operator < (const Fixed &fixed) const;
		bool operator >= (const Fixed &fixed) const;
		bool operator <= (const Fixed &fixed) const;
		bool operator == (const Fixed &fixed) const;
		bool operator != (const Fixed &fixed) const;
		//
		// Fixed operator + (const Fixed &fixed) const;
		// Fixed operator - (const Fixed &fixed) const;
		Fixed operator * (const Fixed &fixed) const;
		// Fixed operator / (const Fixed &fixed) const;
		// //
		Fixed &operator ++ (void);
		Fixed operator ++ (int);
		// Fixed &operator -- (void);
		// Fixed operator -- (int);
		// //
		// static Fixed &min(Fixed &a, Fixed &b);
		// static Fixed &max(Fixed &a, Fixed &b);
		// static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};
std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif