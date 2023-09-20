/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:11:25 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/20 13:47:50 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


// class Test
// {
// 	private:
// 		int *ptr;
	
// 	public :
// 		Test(int value)
// 		{
// 			ptr = new int(value);
// 		}
	
// 		Test(const Test &copy)
// 		{
// 			this->ptr = new int (*(copy.ptr));
// 		}
		
// 		Test& operator = (const Test& copy)
// 		{
// 			if (this != &copy)
// 			{
// 				delete ptr;
// 				this->ptr = new int (*(copy.ptr));
// 			}
// 			return (*this);
// 		}
// 		int getValue()
// 		{
// 			return (*ptr);
// 		}
// 		~Test()
// 		{
// 			delete ptr;
// 		}
// };

void ff()
{
	system("leaks animal");
}

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "-------------------------------------" << std::endl;
	delete j;
	delete i;
	
	Animal *animals[4];
	std::cout << "-------------------------------------" << std::endl;
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	std::cout << "-------------------------------------" << std::endl;
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();
	std::cout << "-------------------------------------" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	std::cout << "-------------------------------------" << std::endl;
	atexit(ff);
	return (0);
}