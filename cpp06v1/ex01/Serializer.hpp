#ifndef SERIALISER_HPP
#define SERIALISER_HPP

#include <string>
#include <iostream>


typedef struct s_data
{
    int age;
    std::string name;
} Data;


class Serializer {

    private:
        Serializer();
        Serializer(const Serializer& copy);
        Serializer& operator= (const Serializer& copy);

    public:
        ~Serializer();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif