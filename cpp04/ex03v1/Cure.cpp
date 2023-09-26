/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:51:31 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 18:54:11 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Default constructor called from Cure" << std::endl;
    this->type = "cure";
}

Cure::Cure(const Cure &copy): AMateria(copy)
{
    std::cout << "Copy constructor called from Cure" << std::endl;
}

Cure &Cure::operator = (const Cure &copy)
{
    std::cout << "Assigment operator called from Cure" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Destructor called from Cure" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}