#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
#include <cstdint>


typedef struct s_data
{
    int data;
}   Data;

class Serializer
{
    private:
        Serializer();
    public:
        Serializer(const Serializer &copy);
        Serializer& operator = (const Serializer &copy);
        ~Serializer();

        static void* serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw );
};
# endif