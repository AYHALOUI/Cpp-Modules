#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const &copy) : std::stack<T>(copy) {}
        MutantStack &operator=(MutantStack const &rhs)
        {
            if (this == &rhs)
                return *this;
            std::stack<T>::operator=(rhs);
            return *this;
        }
        ~MutantStack() {}

        typedef typename std::deque<T>::iterator iterator;
};

#endif