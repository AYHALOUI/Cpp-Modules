/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:28:40 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/26 14:37:34 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"
#include "string"

class Fixed
{
    private:
        int integerPart;
        const static int _fractionalBits;

    public:
        Fixed();
        Fixed(const int integerPart);
        Fixed(const float integerPart);
        Fixed(const Fixed &copy);
        Fixed &operator = (const Fixed &copy);
        void print();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

#endif
