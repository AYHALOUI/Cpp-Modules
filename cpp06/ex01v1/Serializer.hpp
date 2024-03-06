#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cstdint>

typedef struct s_data
{
    std::string name;
    int age;
}   Data;

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &op);

    public:
        ~Serializer();
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);

};
#endif