/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:31:26 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/24 12:56:05 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z1("z1");
    Zombie *z2 = z1.newZombie("Foo");
    z2->announce();
    // z2->Hello();
    z2->randomChump("oo");
    // Zombie *z3 = z2->randomChump("z3");
}