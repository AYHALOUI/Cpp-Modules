#include "Serializer.hpp"

void ff()
{
    system("leaks serializatio");
}

int main()
{
    Data *person = new Data();
    person->name = "aymene";
    person->age = 20;


    std::cout << "********************************" << std::endl;
    uintptr_t value_ptr =  Serializer::serialize(person);
    std::cout << value_ptr << std::endl;
    std::cout << "********************************" << std::endl;
    Data *newPerson = Serializer::deserialize(value_ptr);
    std::cout << newPerson->name << std::endl;
    std::cout << newPerson->age << std::endl;
    std::cout << "********************************" << std::endl;
    std::cout << person << std::endl;
    std::cout << newPerson << std::endl;

    delete person;
    return (0);
}