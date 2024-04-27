#include "PmergeMe.hpp"

std::string PmergeMe::last_arg;

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	std::cout << "Copy constructor called from PmergeMe" << std::endl;
	(*this) = copy;
}


PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	std::cout << "Assignation operator called from PmergeMe" << std::endl;
	if (this == &copy)
		return (*this);
    this->unsorted_vector = copy.unsorted_vector;
    this->main_vector = copy.main_vector;
    this->pend_vector = copy.pend_vector;
    this->index_vector = copy.index_vector;
	return (*this);
}

PmergeMe::~PmergeMe()
{
	
}

std::vector<std::pair<int, int> > PmergeMe::getUnsortedVector() const
{
    return (this->unsorted_vector);
}

std::vector<int> PmergeMe::getMainVector() const
{
    return (this->main_vector);
}

std::vector<int> PmergeMe::getPendVector() const
{
    return (this->pend_vector);
}

std::string PmergeMe::getLastArg()
{
    return (last_arg);
}

bool PmergeMe::parse_args(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "./PmergeMe [numbers]" << std::endl;
        return (false);
    }
    for (int i = 1; i < ac; i++)
    {   
        if (av[i][0] != '+' && !isdigit(av[i][0]) && av[i][0] != ' ')
        {
            std::cout << "Error" << std::endl;
            return (false);
        }
    }
    for (int i = 1; i < ac; i++)
    {
        std::string temp = av[i];
        for (size_t i = 0; i < temp.length(); i++)
        {
            if (!isdigit(temp[i]) && temp[i] != ' ' && temp[i] != '+')
            {
                std::cout << "Error" << std::endl;
                return (false);
            }
        }
    }
    return (true);
}

std::string PmergeMe::join_args(int ac, char **av)
{
    std::string temp;
    int new_ac;

    last_arg = ((ac - 1) % 2 != 0) ? av[ac - 1]: "";
    new_ac = ((ac - 1) % 2 == 0) ? ac: ac - 1;
    for (int i = 1; i < new_ac; i++)
    {
        temp.append(av[i]);
        if (i < new_ac - 1)
            temp.append(" ");
    }
    return (temp);
}

void PmergeMe::replace_char (std::string& args, char target, char remplacement)
{
    for (size_t i = 0; i < args.length(); i++)
    {
        if (args[i] == target)
            args[i] = remplacement;
    }
}

std::string PmergeMe::remove_all_with_spaces(std::string args)
{
    std::string result;
    bool inWord;

    inWord = false;
    replace_char (args, '+', ' ');
    for (std::size_t i = 0; i < args.length(); ++i) 
    {
        if (std::isspace(args[i])) 
        {
            if (!inWord) 
            {
                result += args[i];
                inWord = true;
            }
        } 
        else 
        {
            result += args[i];
            inWord = false;
        }
    }
    return result;
}
/***************** members functions: main ****************/

void PmergeMe::fill_unsorted_vector(std::string args)
{
    args = remove_all_with_spaces(args);
    std::pair<int, int> pairs;
    std::stringstream string_stream(args);
    std::string arg;
    while (std::getline(string_stream, arg, ' '))
    {
        pairs.first = std::atoi(arg.c_str());
        std::getline(string_stream, arg, ' ');
        pairs.second = std::atoi(arg.c_str());
        this->unsorted_vector.push_back(pairs);
    }
    print_before_sort();
}

void PmergeMe::reorders_pairs(std::pair<int, int>& pair)
{
    if (pair.first < pair.second)
        std::swap(pair.first, pair.second);
}

void PmergeMe::sort_reorder_pairs()
{
    for (size_t i = 0; i < this->unsorted_vector.size(); i++)
        reorders_pairs(this->unsorted_vector[i]);
    std::sort(this->unsorted_vector.begin(), this->unsorted_vector.end());
}
int PmergeMe::jacobsthal(int n)
{
    int a;
    int b;
    int c;

    a = 0;
    b = 1;
    if (!n)
        return (a);
    else if (n == 1)
        return (b);
    for (int i = 2; i <= n; i++)
    {
        c = (a * 2) + b;
        a = b;
        b = c;
    }
    return (b);
}

void PmergeMe::create_main_and_pend()
{
    for (size_t i = 0; i < this->unsorted_vector.size(); i++)
    {
        if (!i)
            this->main_vector.push_back(this->unsorted_vector[i].second);
        this->main_vector.push_back(this->unsorted_vector[i].first);
        this->pend_vector.push_back(this->unsorted_vector[i].second);
    }
}

void PmergeMe::create_index_vector()
{
    std::vector<int> jacobsthal_index;
    size_t i = 0;
    while (i <= (this->pend_vector.size()) + 1)
    {
        int value = jacobsthal(i);
        jacobsthal_index.push_back(value);
        if (value > int(this->pend_vector.size()))
            break;
        i++;
    }

    for (size_t i = 0; i < jacobsthal_index.size(); i++)
    {
        if (!i || i == 1 || i == 2 )
            continue;
        int value_tmp1 = jacobsthal_index[i];
        this->index_vector.push_back(value_tmp1);
        if (size_t(value_tmp1) > pend_vector.size())
            this->index_vector.pop_back();
        while (this->index_vector.size() < this->pend_vector.size())
        {
            value_tmp1--;
            while (size_t(value_tmp1) > pend_vector.size())
            {
                value_tmp1--;
                continue;
            }
            if (std::find(jacobsthal_index.begin(), jacobsthal_index.end(), value_tmp1) != jacobsthal_index.end())
                break;
            this->index_vector.push_back(value_tmp1);
        }
    }
}

void PmergeMe::print_before_sort()
{
    std::cout << "Before: ";
    for (size_t i = 0; i < this->unsorted_vector.size(); i++)
        std::cout << this->unsorted_vector[i].first << " " << this->unsorted_vector[i].second << " ";
    if (!last_arg.empty())
        std::cout << last_arg;
    std::cout << std::endl;
}

void PmergeMe::print_after_sort()
{
    std::cout << "After: ";
    for (size_t i = 0; i < this->main_vector.size(); i++)
        std::cout << this->main_vector[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::sort_main_vector()
{
    clock_t start = clock();
    for (size_t i = 0; i < this->index_vector.size(); i++)
    {
        std::vector<int>::iterator ite;

        ite = std::lower_bound(this->main_vector.begin(), this->main_vector.end(), this->pend_vector[index_vector[i] - 1]);
        this->main_vector.insert(ite, pend_vector[this->index_vector[i] - 1]);
    }
    if (!last_arg.empty())
    {
        int last_value;
        std::vector<int>::iterator ite;

        last_value = std::atoi(last_arg.c_str());
        ite = std::lower_bound(this->main_vector.begin(), this->main_vector.end(), last_value);
        this->main_vector.insert(ite, last_value);
    }
    clock_t end = clock();
    print_after_sort();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << this->main_vector.size() << " elements with std::vector: " << elapsed_time << "us" << std::endl;
}
