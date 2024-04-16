/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:15:54 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/16 14:10:08 by ahaloui          ###   ########.fr       */
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



// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }


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
    return (0);
}