/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:01:21 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/26 13:44:46 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enum Level {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

int getIndex(std::string list[], std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (!list[i].compare(level))
			return (i);
	}
	return (-1);
}

int main(int ac, char **av)
{
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int level = getIndex(list, av[1]);
	if (ac == 2)
	{
		switch(level)
		{
			case DEBUG:
				Harl().debug();
			case INFO:
				Harl().info();
			case WARNING:
				Harl().warning();
			case ERROR:
				Harl().error();
				break;
			default:
				Harl().someThingElse();
		}
	}
}