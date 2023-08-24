/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:41:14 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/24 15:04:00 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int numZombies = 2;
    
    Zombie *horde = zombieHorde(numZombies, "Horde Zombie");

    for (int i = 0; i < numZombies; i++)
        horde[i].announce();
    delete[] horde;
    return (1);
}