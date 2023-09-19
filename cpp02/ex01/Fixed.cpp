/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 10:58:29 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;


Fixed::Fixed():fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = copy;
}

Fixed::Fixed(const int fixedPoint):fixedPoint(fixedPoint * (1 << _fractionalBits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fixedPoint):fixedPoint(roundf(fixedPoint * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	return (fixedPoint / float((1 << _fractionalBits)));
}

int Fixed::toInt( void ) const
{
	return (fixedPoint / (1 << _fractionalBits));
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->fixedPoint = copy.getRawBits();
	return (*this);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->fixedPoint);
}

std::ostream& operator << (std::ostream& os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}