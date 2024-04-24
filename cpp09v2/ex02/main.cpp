#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    PmergeMe p;
    if (!p.parse_args(ac, av))
        return (1);
    p.fill_unsorted_vector(p.join_args(ac, av));
    return 0;
}