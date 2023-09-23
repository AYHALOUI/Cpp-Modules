/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:18 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/16 20:12:03 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int add(int x, int y)
// {
//     return x + y;
// }

// int main()
// {
//     int x = 5 ;
//     int value = add(x, ++x) ; // undefined behavior: is this 5 + 6, or 6 + 6?
//     // It depends on what order your compiler evaluates the function arguments in

//     std::cout << value << '\n'; // value could be 11 or 12, depending on how the above line evaluates!

//     return 0;
// }
int main()
{
	// Point point(3.0, 4.0, 5.0);
	// std::cout << point.getX() << " " << point.getY() << " " << point.getZ() << '\n';
	// Fixed a(2.2f);
	// std::cout << a << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}