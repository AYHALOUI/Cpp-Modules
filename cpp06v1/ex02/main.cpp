#include "Base.hpp"
#include "A.hpp"
int main() 
{
    std::cout <<  "-------------------------------------------" << std::endl;
    Base *ptr = generate();
    A a;

    Base& base = a;
    identify(ptr);
    identify(base);
    std::cout << "--------- End of Program ---------" << std::endl;
    return (1); 
}