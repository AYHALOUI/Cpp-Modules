/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:11:25 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/19 16:19:00 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	Cat *cat = new Cat();
	Dog *dog = new Dog();
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
	return (0);
}