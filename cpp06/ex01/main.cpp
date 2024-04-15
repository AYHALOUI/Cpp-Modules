/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:27:41 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/15 01:59:55 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *person = new Data();
    person->name = "aymene";
    person->age = 20;


    std::cout << "********************************" << std::endl;
    uintptr_t value_ptr =  Serializer::serialize(person);
    Data *newPerson = Serializer::deserialize(value_ptr);
    std::cout << newPerson->name << std::endl;
    std::cout << newPerson->age << std::endl;
    std::cout << "********************************" << std::endl;
    std::cout << person << std::endl;
    std::cout << newPerson << std::endl;

    delete person;
    return (0);
}