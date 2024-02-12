#include "BureauCrat.hpp"

void test(int x)
{
    if (x == 0)
        throw BureauCrat::GradeTooHighException();
    else
        throw BureauCrat::GradeTooLowException();
}
int main()
{
    try
    {
        test(0);
    }
    catch (BureauCrat::GradeTooHighException &e)
    {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }
    catch (BureauCrat::GradeTooLowException &e)
    {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }
    return (0);
}