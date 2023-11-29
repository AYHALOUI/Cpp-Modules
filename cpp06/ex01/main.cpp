#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    data->data = 42;
    void *raw = Serializer::serialize(data);
    Data *data2 = Serializer::deserialize(reinterpret_cast<uintptr_t>(raw));
    if (data2->data == data->data)
        std::cout << "Data is the same" << std::endl;
    else
        std::cout << "Data is different" << std::endl;
    delete data;
    return (0);
}