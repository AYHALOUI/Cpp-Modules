/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/24 11:35:30 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;


Fixed::Fixed():myFixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = copy;
}

Fixed::Fixed(const int fixedPoint):myFixedPoint(fixedPoint * (1 << _fractionalBits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fixedPoint):myFixedPoint(int(roundf(fixedPoint * (1 << _fractionalBits))))
{
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	return (myFixedPoint / float((1 << _fractionalBits)));
}

int Fixed::toInt( void ) const
{
	return (myFixedPoint / (1 << _fractionalBits));
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->myFixedPoint = copy.getRawBits();
	return (*this);
}

void Fixed::setRawBits( int const raw )
{
	this->myFixedPoint = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->myFixedPoint);
}

std::ostream& operator << (std::ostream& out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}