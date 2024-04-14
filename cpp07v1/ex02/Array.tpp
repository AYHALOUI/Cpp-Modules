/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:15:43 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/14 16:41:19 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Array.hpp"


template <typename T>
Array<T>::Array()
{
    std::cout << "Default Constructor Called From Array" << std::endl;
    this->add_array = NULL;
    this->array_length = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << "Constructor Parametrazed Called From Array" << std::endl;
    this->array_length = n;
    this->add_array = new T[this->array_length];
}

template <typename T>
Array<T>::Array(const Array& copy)
{
    std::cout << "Copy Constructor Called From Array" << std::endl;
    (*this) = copy;
}


template <typename T>
Array<T>& Array<T>::operator= (const Array& copy)
{
    std::cout << "Assigment Operator Called From Array" << std::endl;
    if (this == &copy)
        return (*this);
    this->array_length = copy.array_length;
    this->add_array = new T[this->array_length];
    for (unsigned int i = 0; i < this->array_length; i++)
        this->add_array[i] = copy.add_array[i];
    return (*this);
}

template <typename T>
T& Array<T>::operator[] (unsigned int position)
{
    if (position < 0 || position >= this->array_length)
        throw std::exception();
    return (this->add_array[position]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return this->array_length;
}

template <typename T>
Array<T>::~Array()
{
    std::cout << "Destructor Called from Array" << std::endl;
    delete[] this->add_array;
}

