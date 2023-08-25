/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:41:14 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/25 11:33:40 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void ff()
{
    system("leaks zombiehorder");
}

int main()
{
    atexit(ff);
    int numZombies = 5;
    
    Zombie *horde = zombieHorde(numZombies, "Horde Zombie");

    for (int i = 0; i < numZombies; i++)
        horde[i].announce();
    delete[] horde;
    return (1);
}