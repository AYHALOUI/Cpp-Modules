/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:56:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/20 17:08:09 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string_view>
#include <iostream>

class Animal
{
    protected:
    std::string m_name;

    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(std::string_view name) : m_name{ name }
    {
        
    }

    public:
        std::string getName() const 
        { 
            return m_name; 
        }
        virtual std::string_view speak() const = 0;

        virtual ~Animal()
        {
            
        }
};

class Cat: public Animal
{
public:
    Cat(std::string_view name) : Animal (name)
    {
        
    }

    std::string_view speak() const override 
    { 
        return "Meow";
    }
};

class Dog: public Animal
{
    public:
    Dog(std::string_view name):Animal(name)
    {
        
    }

    std::string_view speak() const override 
    { 
        return "Woof"; 
    }
};

class Cow:public Animal
{
    public:
    Cow(std::string_view name):Animal(name)
    {
        
    }
    std::string_view speak() const override 
    { 
        return "Moo";
    }
};

int main()
{
    Cow cow ("Betsy");
    std::cout << cow.getName() << " says " << cow.speak() << '\n';
}