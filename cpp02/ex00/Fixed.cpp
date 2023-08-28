/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:28:43 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/26 14:28:44 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 0;

Fixed::Fixed():integerPart(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy):integerPart(copy.integerPart)
{
	// this->integerPart = copy.integerPart;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->integerPart = copy.getRawBits();
	}
	return *this;
}

void Fixed::print()
{
	std::cout << this->integerPart << std::endl;
	std::cout << this->_fractionalBits << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->integerPart);
}

void Fixed::setRawBits( int const raw )
{
	this->integerPart = raw;
}



Fixed::~Fixed()
{
	std::cout << "Deconstructor Called" << std::endl;
}