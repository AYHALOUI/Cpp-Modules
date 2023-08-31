#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "iostream"
#include "string"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator = (const ScavTrap &copy);
		~ScavTrap();

		void guardGate();

};

#endif