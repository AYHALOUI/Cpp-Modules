/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:45:29 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/10 15:48:39 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string fileName, std::string s1, std::string s2)
{
    this->fileName = fileName;
    this->s1 = s1;
    this->s2 = s2;
}

std::string Replace::getFileName()
{
    return (this->fileName);
}

void Replace::myReplace(std::string &line)
{
    std::string newStr;
    size_t posOfFirst = 0;
    size_t posOfPrev = 0;

    while (1337)
    {
        posOfPrev = posOfFirst;
        posOfFirst = line.find(this->s1, posOfFirst);
        if (posOfFirst != std::string::npos)
        {
            newStr.append(line, posOfPrev, posOfFirst - posOfPrev);
            newStr.append(this->s2);
            posOfFirst = posOfFirst + (this->s1).length();
        }
        else
            break;
    }
    newStr.append(line, posOfPrev, line.length() - posOfPrev);
    line = newStr;
}