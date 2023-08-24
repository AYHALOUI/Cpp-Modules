/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:31:26 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/24 13:07:06 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z1("zombie 1");
    z1.announce();
    
    Zombie *z2 = z1.newZombie("zombie 2");
    z2->announce();

    z2->randomChump("Zombie 3");

    delete z2;
}