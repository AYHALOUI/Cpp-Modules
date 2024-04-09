#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default Constructor Called from Serializer" << std::endl;
}

Serializer::Serializer(const Serializer& copy)
{
    std::cout << "Copy Constructor Called from Serializer" << std::endl;
    (*this) = copy;
}

Serializer& Serializer::operator= (const Serializer& copy)
{
    std::cout << "Assigment Operator Called from Serializer" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

Serializer::~Serializer()
{
    std::cout << "Default Destructor Called from Serializer" << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}