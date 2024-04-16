/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:16:08 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/16 14:42:24 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

/* Function template to iterate over an array */
template <typename T, typename Func>
void iter (T* add_array, size_t array_length, Func function)
{
    for (size_t i = 0; i < array_length; i++)
        function(add_array[i]);
}

/* Example function template to be called on each element */
template <typename T>
void displayArrayElement (T element)
{
    std::cout << element << std::endl;
}

#endif