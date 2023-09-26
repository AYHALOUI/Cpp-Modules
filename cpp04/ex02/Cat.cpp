/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:33 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 16:07:48 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
    std::cout << "Default constructor called from Cat" << std::endl;
    this->type = "Cat";
    this->ptrBrain = new Brain();
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Copy constructor called from Cat" << std::endl;
    this->ptrBrain = new Brain();
    (*this) = copy;
}

Cat &Cat::operator = (const Cat &copy)
{
    std::cout << "Assigment operator called from Cat" << std::endl;
    if (this == &copy)
        return (*this);
    *(this->ptrBrain) = *(copy.ptrBrain);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor called from Cat" << std::endl;
    delete (this->ptrBrain);
}


void Cat::makeSound() const
{
    std::cout << "\033[32m" << "Cat Meows" << "\033[0m" << std::endl;
}
