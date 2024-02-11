#include "BureauCrat.hpp"
#include <stdexcept>

class Enclosing {

    private:
        int x;
    
    public:
    class Nested {

        public:
        int y;

        void NestedFun(Enclosing *e)
        {
            e->x = 10;
            this->y = 30;
            std::cout << e->x << std::endl;
            std::cout << y << std::endl;
        }
    };
};

int main()
{
    
    Enclosing::Nested test;
    test.NestedFun(new Enclosing());
    return (0);
}