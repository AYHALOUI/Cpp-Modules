#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default constructor called from Serializer" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
    (void)copy;
    std::cout << "Copy constructor called from Serializer" << std::endl;
}

Serializer& Serializer::operator = (const Serializer &copy)
{
    std::cout << "Assignation operator called from Serializer" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

Serializer::~Serializer()
{
    std::cout << "Destructor called from Serializer" << std::endl;
}


void* Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<void*>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}