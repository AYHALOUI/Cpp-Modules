#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main(void)
{
//  //mai
    Base* obj1 = generate();
    Base* obj2 = generate();

    std::cout << "Object 1: ";
    identify(obj1);

    std::cout << "Object 2: ";
    identify(obj2);

    delete obj1;
    delete obj2;

    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
    return (0);
}