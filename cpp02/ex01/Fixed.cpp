/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/15 20:14:30 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractionalBits = 8;



Fixed::Fixed():fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixedPoint):fixedPoint(fixedPoint * (1 << _fractionalBits))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatingPoint):fixedPoint(roundf(floatingPoint * (1 << _fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
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

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}