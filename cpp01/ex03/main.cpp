/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:22:29 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/25 14:38:22 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

class Person{
    private:
        std::string name;
        int age;
        
    public:
        Person(): name("aymene"), age(0){
            std::cout << "Default Constructor called" << std::endl;
        }
        Person(std::string& name, int age): name(name), age(age)
        {
            std::cout << "Parameterized Constructor called" << std::endl;
        }
        std::string getName()
        {
            return (this->name);
        }
};

int main()
{
    Weapon club = Weapon("crude spiked club");
    
    // HumanA bob("Bob", club);
    // bob.attack();
    // club.setType("some other type of club");
    // bob.setWeapon(club);
    // bob.attack();

    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    return 0;
}