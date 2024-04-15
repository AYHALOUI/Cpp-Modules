/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:28:46 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/15 02:06:59 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "C.hpp"
#include "B.hpp"
#include "A.hpp"


Base* generate(void)
{
    std::srand((unsigned)time(NULL)); 
    int index_of_object = (std::rand() %  10);

    switch(index_of_object)
    {
        case 1:
            return (new A());
        case 2:
            return (new B());
        case 3:
            return (new C());
        default:
            return (NULL);
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "Object From Class A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Object From Class B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Object From Class C" << std::endl;
    else
        std::cout <<  "Failed To Cast" << std::endl;
}

void identify(Base& p)
{
    try
    {
        void(dynamic_cast<A &>(p));
        std::cout << "Object From Class A" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
        try
        {
            void(dynamic_cast<B &>(p));
            std::cout << "Object From Class B" << std::endl;
        }
        catch(const std::bad_cast& e)
        {
            try
            {
                void(dynamic_cast<B &>(p));
                std::cout << "Object From Class C" << std::endl;
            }
            catch(const std::bad_cast& e)
            {
               std::cout <<  "Failed To Cast" << std::endl;
            }
        }
    }
}

Base::~Base()
{
    std::cout << "Destructor Called from Base" << std::endl;
}