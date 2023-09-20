/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:49:21 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/20 19:00:39 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure &copy): AMateria(copy)
{
    std::cout << "Cure Copy constructor called" << std::endl;
}

Cure &Cure::operator = (const Cure &copy)
{
    std::cout << "Cure Assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    AMateria::operator = (copy);
    return (*this);
}