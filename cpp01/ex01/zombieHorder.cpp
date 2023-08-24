/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorder.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:42:36 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/24 15:03:08 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *hordeZombie = new Zombie[N];
    
    for (int i = 0; i < N; i++)
        hordeZombie[i] = Zombie(name);
    return (hordeZombie);
}
