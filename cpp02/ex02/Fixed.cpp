/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/24 11:26:59 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed():myFixedPoint(0)
{
	
}

Fixed::Fixed(const int fixedPoint):myFixedPoint(fixedPoint * (1 << _fractionalBits))
{
	
}

Fixed::Fixed(const float floatingPoint):myFixedPoint(int(roundf(floatingPoint * (1 << _fractionalBits))))
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

float Fixed::toFloat( void ) const
{
	return (myFixedPoint / float((1 << _fractionalBits)));
}

int Fixed::toInt( void ) const
{
	return (myFixedPoint / (1 << _fractionalBits));
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
	if (this->myFixedPoint > fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed &fixed) const
{
	if (this->myFixedPoint < fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator >= (const Fixed &fixed) const
{
	if (this->myFixedPoint >= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed &fixed) const
{
	if (this->myFixedPoint <= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed &fixed) const
{
	if (this->myFixedPoint == fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed &fixed) const
{
	if (this->myFixedPoint != fixed.getRawBits())
		return (true);
	return (false);
}
/*****************************************************************/

//The 4 arithmetic operators: +, -, *, and /.
Fixed Fixed::operator + (const Fixed &fixed) const
{
	Fixed result;
	result.myFixedPoint = this->myFixedPoint + fixed.getRawBits();
	return result;
}

Fixed Fixed::operator - (const Fixed &fixed) const
{
	Fixed result;
	result.myFixedPoint = this->myFixedPoint - fixed.getRawBits();
	return result;
}

Fixed Fixed::operator * (const Fixed &fixed) const
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator / (const Fixed &fixed) const
{
	Fixed result;
	if (fixed.getRawBits() != 0)
		result.myFixedPoint = this->myFixedPoint / fixed.getRawBits();
	return result;
}
/*****************************************************************/

//The 4 increment/decrement

// Pre-increment operator (++fixed)
Fixed& Fixed::operator ++ (void)
{
	this->myFixedPoint++;
	return (*this);
}

// Post-decrement operator (fixed++)
Fixed Fixed::operator ++ (int)
{
	Fixed copy(*this);
	++(*this); // Call pre-decrement
	return copy;
}

// Pre-decrement operator (--fixed)
Fixed& Fixed::operator -- (void)
{
	this->myFixedPoint--;
	return (*this);
}

// Post-decrement operator (fixed--)
Fixed Fixed::operator -- (int)
{
	Fixed copy(*this);
	--(*this); // Call pre-increment
	return copy;
}
/******************************************************

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