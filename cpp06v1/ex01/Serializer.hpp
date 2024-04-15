/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:31:10 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/15 02:08:50 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISER_HPP
#define SERIALISER_HPP

#include <string>
#include <iostream>


typedef struct s_data
{
    int age;
    std::string name;
} Data;


class Serializer {

    private:
        Serializer();

    public:
        Serializer(const Serializer& copy);
        Serializer& operator= (const Serializer& copy);
        ~Serializer();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif