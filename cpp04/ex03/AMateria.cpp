/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:06:10 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/20 20:46:59 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type("")
{
    std::cout << "AMateria Default constructor called" << std::endl;
}


AMateria::AMateria(const AMateria &copy)
{
    std::cout << "AMateria Copy constructor called" << std::endl;
    (*this) = copy;
}

AMateria& AMateria::operator = (const AMateria &copy)
{
    std::cout << "AMateria Assigment operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type)
{
    std::cout << "AMateria Parametric constructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

// void AMateria::use(ICharacter& target)
// {
//     std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
// }