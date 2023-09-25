/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:33 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 17:37:38 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat():Animal()
{
    std::cout << "Default constructor called from Cat" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &copy)
{
    std::cout << "Cat Assigment operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor called from Cat" << std::endl;
}


void Cat::makeSound() const
{
    std::cout << "\033[32m" << "Cat Meows" << "\033[0m" << std::endl;
}
