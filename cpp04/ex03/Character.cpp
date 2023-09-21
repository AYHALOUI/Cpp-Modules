/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:19:09 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/20 18:46:35 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("")
{
    std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(const Character &copy)
{
    std::cout << "Character Copy constructor called" << std::endl;
    (*this) = copy;
}

Character& Character::operator = (const Character &copy)
{
    std::cout << "Character Assigment operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->name = copy.name;
    return (*this);
}

Character::~Character()
{
    std::cout << "Character Destructor called" << std::endl;
}

Character::Character(std::string const & name): name(name)
{
    std::cout << "Character Parametric constructor called" << std::endl;
}
std::string const & Character::getName() const
{
    std::cout << "Character getName called" << std::endl;
    return (this->name);
}

void Character::equip(AMateria* m)
{
    std::cout << "Character equip called" << std::endl;
    (void)m;
}

void Character::unequip(int idx)
{
    std::cout << "Character unequip called" << std::endl;
    (void)idx;
}

void Character::use(int idx, ICharacter& target)
{
    std::cout << "Character use called" << std::endl;
    (void)idx;
    (void)target;
}
