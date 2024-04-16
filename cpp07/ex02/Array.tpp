/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:15:43 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/16 14:11:52 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

template <typename T>
Array<T>::Array(): add_array(NULL), array_length(0)
{
    std::cout << "Default Constructor Called From Array" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n): array_length(n)
{
    std::cout << "Constructor Parametrazed Called From Array" << std::endl;
    this->add_array = new T[this->array_length];
}

template <typename T>
Array<T>::Array(const Array& copy)
{
    std::cout << "**********************************" << std::endl;
    std::cout << "Copy Constructor Called From Array" << std::endl;
    std::cout << "**********************************" << std::endl;
    this->array_length = copy.array_length;
    this->add_array = new T[this->array_length];
    for (unsigned int i = 0; i < this->array_length; i++)
        this->add_array[i] = copy.add_array[i];
}


template <typename T>
Array<T>& Array<T>::operator= (const Array& copy)
{
     std::cout << "**********************************" << std::endl;
    std::cout << "Assigment Operator Called From Array" << std::endl;
     std::cout << "**********************************" << std::endl;
    if (this == &copy)
        return (*this);
    delete [] this->add_array;
    this->array_length = copy.array_length;
    this->add_array = new T[this->array_length];
    for (unsigned int i = 0; i < this->array_length; i++)
        this->add_array[i] = copy.add_array[i];
    return (*this);
}

template <typename T>
T& Array<T>::operator[] (int position)
{
    if (position < 0 || (unsigned int)position >= this->array_length)
        throw std::exception();   
    return (this->add_array[position]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (this->array_length);
}

template <typename T>
Array<T>::~Array()
{
    std::cout << "Destructor Called from Array" << std::endl;
    delete[] this->add_array;
}

