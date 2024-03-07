#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int value = std::rand() % 3;
    switch (value)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL;
    }
}
void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Object type: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Object type: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Object type: C" << std::endl;
    else
        std::cout << "Object Unkown" << std::endl;
}

void identify(Base& p)
{
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "Object type: A" << std::endl;
    }
    catch(const std::exception&)
    {
        try
        {
            dynamic_cast<B&>(p);
            std::cout << "Object type: B" << std::endl;
        }
        catch(const std::exception&)
        {
            try
            {
                dynamic_cast<C&>(p);
                std::cout << "Object type: C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "Object Unkown" << std::endl;
            }
        }
            
    }
    
}