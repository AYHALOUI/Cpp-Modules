/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:45:39 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/07 13:50:22 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Replace.hpp"


// void replace_all( std::string &line, std::string s1, std::string s2) 
// {
//     std::string buf;
//     std::size_t pos = 0;
//     std::size_t prevPos;

//     while (true) 
// 	{
//         prevPos = pos;
//         pos = line.find(s1, pos);
//         if (pos == std::string::npos)
//             break;
//         buf.append(line, prevPos, pos - prevPos);
//         buf += s2;
//         pos += s1.length();
//     }

//     buf.append(line, prevPos, line.length() - prevPos);
// 	line = buf;
// }

int main(int ac, char **av)
{
	std::string line;
	if (ac == 4)
	{
		Replace replace = Replace(av[1], av[2], av[3]);
		std::ifstream inFile(replace.getFileName());
		std::ofstream outFile(replace.getFileName()+".replace");
		if (inFile.is_open())
		{
			std::cout << "File Opened Successfully" << std::endl;
			while (getline(inFile, line))
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