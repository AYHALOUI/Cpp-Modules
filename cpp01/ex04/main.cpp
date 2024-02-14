/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:45:39 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/08 14:47:36 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
	std::string line;
	if (ac == 4)
	{
		Replace replace = Replace(av[1], av[2], av[3]);
		std::ifstream inFile(replace.getFileName());
		if (inFile.is_open())
		{
			std::ofstream outFile(replace.getFileName()+".replace");
			std::cout << "File Opened Successfully" << std::endl;
			while (std::getline(inFile, line))
			{
				replace.myReplace(line);
				outFile << line << std::endl;
			}
			inFile.close ();
		}
		else
			std::cout << "Failed to Open File" << std::endl;
	}
	else
		std::cout << "Invalid Args" << std::endl;
	return (0);
}

