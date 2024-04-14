/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:15:54 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/13 23:58:23 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Array.hpp"

// class Marks {
//     private:
//         int notes[2];
    
//     public:
//         Marks(int a, int b)
//         {
//             this->notes[0] = a;
//             this->notes[1] = b;
//         }

//         int operator[] (int index)
//         {
//             return this->notes[index];
//         }
// };

void ff()
{
    system("leaks array");
}


int main()
{
    std::cout << "--------- Array of integers -----------" << std::endl;
    Array<int> intArr(4);
    std::cout << "Integer Arr size: " << intArr.size() << std::endl;

    for (unsigned int i = 0; i < intArr.size(); i++)
    {
        intArr[i] = i + 1;
        std::cout << intArr[i] << std::endl;
    }
    
    std::cout << "--------- Array of doubles -----------" << std::endl;
    Array<double> doubleArr(3);
    std::cout << "doubleArr size: " << doubleArr.size() << std::endl;
    
    for (unsigned int i = 0; i < doubleArr.size(); ++i) {
        doubleArr[i] = (i + 1) * 1.1;
        std::cout << doubleArr[i] << std::endl;
    }

    std::cout << "--------- Array of strings -----------" << std::endl;
    Array<std::string> stringArr(2);
    std::cout << "stringArr size: " << stringArr.size() << std::endl;
    
    stringArr[0] = "aymene";
    stringArr[1] = "haloui";

    for (unsigned int i = 0; i < stringArr.size(); ++i)
        std::cout << stringArr[i] << std::endl;

    std::cout << "------ Copy constructor test for stringArr ----" << std::endl;
    Array<std::string> stringArrCopy = stringArr;
    
    for (unsigned int i = 0; i < stringArrCopy.size(); i++)
    {
        stringArr[i] += " ahaloui";
        std::cout << stringArrCopy[i] << std::endl;
    }

    try 
    {
        std::cout << stringArrCopy[10] << std::endl;    
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << "*------------- End of the program --------------*" << std::endl;
    //atexit(ff);
    return (0);
}