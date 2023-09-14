/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:18 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/14 17:38:18 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	std::cout << "**************************\n";
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}