/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:31:26 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/25 10:04:50 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main()
{
    Zombie z1("Zombie 1");
    z1.announce();

    Zombie *z2 = newZombie("Zombie 2");
    z2->announce();

    randomChump("Zombie 3");
    delete z2;
    return (1);
}