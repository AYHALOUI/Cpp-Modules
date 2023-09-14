/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/14 17:37:25 by ahaloui          ###   ########.fr       */
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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

Fixed::~Fixed()
{
    std::cout << "Destructor Created" << std::endl;
}