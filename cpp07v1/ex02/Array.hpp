/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:16:01 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/13 23:28:26 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T* add_array;
        unsigned int array_length;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        Array& operator= (const Array& copy);

        T& operator[] (unsigned int position);
        unsigned int size() const;

        ~Array();
};
#include "Array.tpp"

#endif