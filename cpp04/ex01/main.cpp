/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:11:25 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 16:26:32 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "Brain.hpp"

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
// 			(*this) = copy;
// 		}
		
// 		Test& operator = (const Test& copy)
// 		{
// 			if (this != &copy)
// 				this->ptr = new int (*(copy.ptr));
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
	delete j;//should not create a leak
	delete i;

	std::cout << "-------- My Test ---------" << std::endl;
	int size = 4;
	Animal *arraysOfAnimals[size];

	std::cout << "------ Dog Creation ------" << std::endl;
	for (int i = 0; i < size/2; i++)
		arraysOfAnimals[i] = new Cat();
	
	std::cout << "------ Cat Creation ------" << std::endl;
	for (int i = 2; i < size; i++)
		arraysOfAnimals[i] = new Dog();
	
	std::cout << "------ Make sound ------" << std::endl;
	for (int i = 0; i < size; i++)
		arraysOfAnimals[i]->makeSound();
		
	std::cout << "------ destructions ------" << std::endl;
	for (int i = 0; i < size; i++)
		delete arraysOfAnimals[i];
	return (0);
}