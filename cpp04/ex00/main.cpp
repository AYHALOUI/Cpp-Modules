/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:11:25 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 17:50:32 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	Animal *cat = new Cat();
	Animal *dog = new Dog();
	Animal *animal = new Animal();
	
	std::cout << std::endl;

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	
	std::cout << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	
	std::cout << std::endl;

	delete cat;
	delete dog;
	delete animal;

	std::cout << std::endl;
	
	WrongAnimal *Rcat = new WrongCat();
	WrongAnimal *wrongAnimal = new WrongAnimal();
	WrongCat cats = WrongCat();
	
	std::cout << std::endl;

	std::cout << Rcat->getType() << std::endl;
	
	std::cout << std::endl;
	Rcat->makeSound();
	wrongAnimal->makeSound();
	
	std::cout << std::endl;

	delete Rcat;
	delete wrongAnimal;
	return (0);
}