/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:30:42 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/15 02:07:52 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default Constructor Called from Serializer" << std::endl;
}

Serializer::Serializer(const Serializer& copy)
{
    std::cout << "Copy Constructor Called from Serializer" << std::endl;
    (*this) = copy;
}

Serializer& Serializer::operator= (const Serializer& copy)
{
    (void)copy;
    std::cout << "Assigment Operator Called from Serializer" << std::endl;
    return (*this);
}

Serializer::~Serializer()
{
    std::cout << "Default Destructor Called from Serializer" << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}