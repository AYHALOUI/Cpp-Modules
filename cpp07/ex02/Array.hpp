#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

# include <cstdlib>

template <typename T>

class Array
{
    private:
        T	*_array;
        int	_size;

    public:

        Array(void) : _array(NULL), _size(0) {}
        Array(unsigned int n) : _array(new T[n]), _size(n) {}
        Array(Array const &src) : _array(NULL), _size(0) { *this = src; }
        ~Array(void) 
        { 
            delete [] _array; 
        }
        Array	&operator=(Array const &src)
        {
            if (this != &src)
            {
                delete [] _array;
                _array = new T[src._size];
                for (int i = 0; i < src._size; i++)
                    _array[i] = src._array[i];
                _size = src._size;
            }
            return (*this);
        }

        T	&operator[](int i)
        {
            if (i < 0 || i >= _size)
                throw std::exception();
            return (_array[i]);
        }

        int	size(void) const { return (_size); }
};
#endif