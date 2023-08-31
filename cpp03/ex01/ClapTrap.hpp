#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include "iostream"
#include "string"

class ClapTrap
{
	protected:
		std::string name;
		int hitPoints;
  		int energyPoints;
  		int attackDamage;
	
	public:
		/*************************************/
		// Orthodox Canonical Form
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator = (const ClapTrap &copy);
		~ClapTrap();

		/*************************************/
		ClapTrap(std::string name);
		/*************************************/
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		/*************************************/
		void printInfo();
		/*************************************/
		void setName(std::string name);
		void setHitsPoints(int hitPoints);
		void setEnergyPoints(int energyPoints);
		void setAttackDamage(int attackDamage);
		/*************************************/

		std::string getName();
		int gethitPoints();
		int getEnergyPoints();
		int getAttackDamage();
		/*************************************/

};

#endif