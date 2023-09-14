/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:44:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/14 18:13:17 by ahaloui          ###   ########.fr       */
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
		// std::ostream &operator << (std::ostream &out, const Fixed &fixed);
};
std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif