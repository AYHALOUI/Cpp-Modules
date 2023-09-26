/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:11:25 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/26 14:14:26 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	Dog dog;
	Cat cat;
	Animal animal;
	std::cout << "*****************" << std::endl;
	dog.makeSound();
	std::cout << "*****************" << std::endl;
	cat.makeSound();
	std::cout << "*****************" << std::endl;
	animal.makeSound();
	std::cout << "*****************" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "--------- Destruction ---------------" << std::endl;
	delete i;
	delete j;
	delete meta;
	std::cout << "--------- Destruction1 ---------------" << std::endl;

	std::cout << "-------------- More tests ----------------"<< std::endl;
	std::cout << "******************************************"<< std::endl;
	
	WrongAnimal *wrongAnimal  = new WrongAnimal();
	WrongAnimal *wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;
	
	return (0);
}