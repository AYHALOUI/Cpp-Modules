/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/15 11:40:03 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
const int Fixed::_fractionalBits = 8;

Fixed::Fixed():fixedPoint(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixedPoint):fixedPoint(fixedPoint << 8)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatingPoint):fixedPoint(roundf(floatingPoint * (1 << _fractionalBits)))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = copy.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &copy)
{
    if (this == &copy)
        return *this;
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = copy.getRawBits();
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedPoint = raw;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

float Fixed::toFloat( void ) const
{
    float frac = (1 << _fractionalBits);
    return (fixedPoint / frac);
}

int Fixed::toInt( void ) const
{
    return (fixedPoint >> 8);
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

//
bool Fixed::operator > (const Fixed &fixed) const
{
    return (this->fixedPoint > fixed.getRawBits());
}

bool Fixed::operator < (const Fixed &fixed) const
{
    return (this->fixedPoint < fixed.getRawBits());
}

bool Fixed::operator >= (const Fixed &fixed) const
{
    return (this->fixedPoint >= fixed.getRawBits());
}

bool Fixed::operator <= (const Fixed &fixed) const
{
    return (this->fixedPoint <= fixed.getRawBits());
}

bool Fixed::operator == (const Fixed &fixed) const
{
    return (this->fixedPoint == fixed.getRawBits());
}

bool Fixed::operator != (const Fixed &fixed) const
{
    return (this->fixedPoint != fixed.getRawBits());
}

//
Fixed Fixed::operator * (const Fixed &fixed) const
{
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

//
Fixed &Fixed::operator ++ (void)
{
    this->fixedPoint++;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}
//

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor Created" << std::endl;
}