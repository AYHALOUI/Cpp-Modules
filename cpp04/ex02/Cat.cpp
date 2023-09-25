/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:33 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/25 15:12:57 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"


Cat::Cat(): Animal()
{
   std::cout << "Default constructor called from Cat" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Copy constructor called from Cat" << std::endl;
    brain = new Brain();
    (*this) = copy;
}

Cat &Cat::operator = (const Cat &copy)
{
    std::cout << "Assigment operator called from Cat" << std::endl;
    Animal::operator = (copy);
    if (this != &copy)
        *(this->brain) = *(copy.brain);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor called from Cat" << std::endl;
    delete this->brain;
}


void Cat::makeSound() const
{
    std::cout << "Cat makeSound called" << std::endl;
}

// Cat::Cat(std::string ideas[100])
// {
//     std::cout << "Parametric constructor called from Cat" << std::endl;
//     this->brain = new Brain(ideas);
// }
