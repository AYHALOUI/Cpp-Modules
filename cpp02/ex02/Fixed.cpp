/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/16 19:14:14 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed():fixedPoint(0)
{
	
}

Fixed::Fixed(const int fixedPoint):fixedPoint(fixedPoint * (1 << _fractionalBits))
{
	
}

Fixed::Fixed(const float floatingPoint):fixedPoint(roundf(floatingPoint * (1 << _fractionalBits)))
{
	
}

/******************************************************************/

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator = (const Fixed &copy)
{
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

float Fixed::toFloat( void ) const
{
	return (fixedPoint / float((1 << _fractionalBits)));
}

int Fixed::toInt( void ) const
{
	return (fixedPoint / (1 << _fractionalBits));
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

/******************************************************************/

// The 6 comparison operators: >, <, >=, <=, == and !=.
/******************************************************************/
bool Fixed::operator > (const Fixed &fixed) const
{
	if (this->fixedPoint > fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed &fixed) const
{
	if (this->fixedPoint < fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator >= (const Fixed &fixed) const
{
	if (this->fixedPoint >= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed &fixed) const
{
	if (this->fixedPoint <= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed &fixed) const
{
	if (this->fixedPoint == fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed &fixed) const
{
	if (this->fixedPoint != fixed.getRawBits())
		return (true);
	return (false);
}
/*****************************************************************/

//The 4 arithmetic operators: +, -, *, and /.
Fixed Fixed::operator + (const Fixed &fixed) const
{
	Fixed result;
	result.fixedPoint = this->fixedPoint + fixed.getRawBits();
	return result;
}

Fixed Fixed::operator - (const Fixed &fixed) const
{
	Fixed result;
	result.fixedPoint = this->fixedPoint - fixed.getRawBits();
	return result;
}

Fixed Fixed::operator * (const Fixed &fixed) const
{
	Fixed result;
	result.fixedPoint = this->fixedPoint * fixed.getRawBits();
	return result;
}

Fixed Fixed::operator / (const Fixed &fixed) const
{
	Fixed result;
	if (fixed.getRawBits() != 0)
		result.fixedPoint = this->fixedPoint / fixed.getRawBits();
	return result;
}
/*****************************************************************/

//The 4 increment/decrement

// Pre-increment operator (++fixed)
Fixed& Fixed::operator ++ (void)
{
	this->fixedPoint++;
	return (*this);
}

// Post-decrement operator (fixed++)
Fixed Fixed::operator ++ (int)
{
	Fixed original(*this);
	++(*this); // Call pre-decrement
	return original;
}

// Pre-decrement operator (--fixed)
Fixed& Fixed::operator -- (void)
{
	this->fixedPoint--;
	return (*this);
}

// Post-decrement operator (fixed--)
Fixed Fixed::operator -- (int)
{
	Fixed original(*this);
	--(*this); // Call pre-increment
	return original;
}
/******************************************************/

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

/*****************************************************************/

Fixed::~Fixed()
{
	
}