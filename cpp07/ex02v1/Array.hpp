#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array {

    private:
        T* array;
        unsigned int length;
    

    public:
        Array()
        {
            this->array = NULL;
            this->length = 0;
        }

        Array(unsigned int n)
        {
            this->length = n;
            this->array = new T[this->length];
        }

        Array(const Array& copy)
        {
            std::cout << "Copy Constructor Called";
            this->length = copy.length;
            this->array = new T[this->length];
            for (unsigned int i = 0; i < this->length; i++)
                this->array[i] = copy.array[i];
        }

        Array& operator = (const Array& copy)
        {
            if (this == &copy)
                return (*this);
            if (this->array)
                delete[] this->array;
            this->length = copy.length;
            this->array = new T[this->length];
            for (unsigned int i = 0; i < this->length; i++)
                this->array[i] = copy.array[i];
            return (*this);
        }

        T& operator[] (unsigned int index)
        {
            if (index >= this->length)
                throw new std::exception();
            return this->array[index];
        }

        unsigned int size()
        {
            return this->length;
        }

        ~Array()
        {
            delete[] this->array;
        }
};
#endif

