
#include "BitcoinExchange.hpp"
#include <algorithm>

using namespace std;

int main(int ac, char **av)
{
    BitcoinExchange bitcoin;
    if (ac !=2 )
    {
        std::cout << "Usage: ./btc < file_name >" << std::endl;
        return (1);
    }
    if (!bitcoin.read_data_of_bitcoin("data.csv"))
        return (1);
    if (!bitcoin.parsing_input_file(av[1]))
        return (1);
    
    // std::map<std::string, std::string> data = bitcoin.getDataBitcoin();
    // for (std::map<std::string, std::string>::iterator ite = data.begin(); ite != data.end(); ite++)
    //     std::cout << ite->first << "," << ite->second << std::endl; 


    return (0);
}