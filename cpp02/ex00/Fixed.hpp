/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:44:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/14 17:37:30 by ahaloui          ###   ########.fr       */
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
		Fixed(const Fixed &copy);
		Fixed &operator = (const Fixed &copy);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif