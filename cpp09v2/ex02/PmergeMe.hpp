#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <vector>


class PmergeMe
{
    private:
        std::vector<std::pair<int, int> > unsorted_vector;
        std::vector<int> main_vector;
        std::vector<int> pend_vector;
        static std::string last_arg;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &copy);
        ~PmergeMe();

        /* getters */
        std::vector<std::pair<int, int> > getUnsortedVector() const;
        std::vector<int> getMainVector() const;
        std::vector<int> getPendVector() const;
        static std::string getLastArg();

        /* members functions */
        bool parse_args(int ac, char **av);
        std::string join_args(int ac, char **av);
        void replace_char (std::string& args, char target, char remplacement);
        std::string remove_all_with_spaces(std::string args);
    
        void fill_unsorted_vector(std::string args);
};

#endif