/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:16:08 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/13 22:16:09 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ITER_HPP
#define ITER_HPP


#include <iostream>
#include <string>

template <typename T, typename F>
void iter (T* add_array, size_t array_length, F function)
{
    for (size_t i = 0; i < array_length; i++)
    {
        function(add_array[i]);
    }
    
}

template <typename T>
void printArrayElement (T element)
{
    std::cout << element << std::endl;
}

#endif