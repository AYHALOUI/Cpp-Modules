#include "Serializer.hpp"


int main()
{
    Data *myData = new Data();
    myData->name = "aymene";
    myData->age = 24;

    std::cout << "********************************" << std::endl;
    uintptr_t value =  Serializer::serialize(myData);
    std::cout << value << std::endl;
    std::cout << "********************************" << std::endl;
    Data *newData = Serializer::deserialize(value);
    std::cout << newData->name << std::endl;
    std::cout << newData->age << std::endl;
    std::cout << "********************************" << std::endl;
    std::cout << myData << std::endl;
    std::cout << newData << std::endl;

    delete myData;
    return 1;
}