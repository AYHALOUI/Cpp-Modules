/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:18 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 11:59:55 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main()
{	
	Fixed		a;
	Fixed const b( 22.625f );
	Fixed const c( 263.2f );
	std::cout << b.getRawBits() << std::endl;
	// Fixed const d( b );
	// std::cout << roundf(67404) << std::endl;
	// a = Fixed( 1234.4321f );
	
	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toFloat() << " as integer" << std::endl;
	return (0);
}