/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:05:58 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/21 21:43:30 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
// int main()
// {
//     Ice ice;
//     Cure cure;
//     std::cout << "---------------------" << std::endl;
//     // std::cout << ice.getType() << std::endl;
//     // std::cout << "---------------------" << std::endl;
//     // AMateria *clone = ice.clone();
//     // std::cout << clone->getType() << std::endl;
//     // AMateria *clone2 = cure.clone();
//     // std::cout << clone2->getType() << std::endl;
//     // std::cout << "---------------------" << std::endl;
//     ICharacter *bob = new Character("bob");

//     ice.use(*bob);
//     cure.use(*bob);

//     std::cout << "---------------------" << std::endl;

//     return (0);
// }
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}