#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout << "Default constructor from ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
	std::cout << "Copy Constructor called from ScavTrap" << std::endl;
	*this = copy;
}


ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Assiment operator called from ScavTrap" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);	
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor Called from ScavTrap" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}



