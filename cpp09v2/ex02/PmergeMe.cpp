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
    for (std::vector<std::pair<int, int> >::iterator it = this->unsorted_vector.begin(); it != this->unsorted_vector.end(); it++ )
    {
        std::cout << "[" << it->first << ", " << it->second << "]" << " ";
    }
}