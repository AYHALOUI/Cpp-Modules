/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/08 13:06:20 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void ff()
{
	system("leaks zombiehorde");
}

int main()
{
	int N = 8;
	Zombie *zombiehorde = zombieHorde(N, "Zombie Horde");

	for (int i = 0; i < N; i++)
		zombiehorde[i].announce();
	delete[] zombiehorde;
	return (0);
}