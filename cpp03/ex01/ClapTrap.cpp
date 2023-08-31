#include "ClapTrap.hpp"

/******************************************************/
// Orthodox Canonical Form
ClapTrap::ClapTrap():name(""), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "Default constructor Called from ClapTrap" << std::endl;   
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	if (this != &copy)
	{
		std::cout << "Copy Constructor called from ClapTrap" << std::endl;
		*this = copy;
	}
	
}

ClapTrap& ClapTrap::operator = (const ClapTrap &copy)
{
	if (this != &copy)
	{
		std::cout << "Assiment operator called from ClapTrap" << std::endl;
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor Called from ClapTrap" << std::endl;
}

/******************************************************/

ClapTrap::ClapTrap(std::string name):name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor paramtred called" << std::endl;
}

/************************************************/
void ClapTrap::attack(const std::string &target)
{
	if (!this->energyPoints || !this->hitPoints)
	{
		std::cout << "ClapTrap " << this->name << " can't attack. No hit points or energy points left!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing <" << this->attackDamage << "> points of damage!" << std::endl;
	this->energyPoints--; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hitPoints)
	{
		std::cout << "ClapTrap " << this->name << " is already destroyed!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hitPoints)
	{
		std::cout << "ClapTrap can't be repaired," << this->name << " is already destroyed!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " hit points!" << std::endl;
	this->hitPoints += amount;
	if (this->hitPoints > 10)
		this->hitPoints = 10;
	this->energyPoints--;
}

/*************************************************/
void ClapTrap::printInfo()
{
	std::cout << "\n******************************" << std::endl;
	std::cout <<"name: " <<this->name << std::endl;
	std::cout <<"hitPoints: " << this->hitPoints << std::endl;
	std::cout << "energyPoints: " << this->energyPoints << std::endl;
	std::cout << "attackDamage:" << this->attackDamage << std::endl;
	std::cout << "******************************" << std::endl;
}
/*************************************************/
//setters
void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setHitsPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;
}
/**************************************************/
// getters
std::string ClapTrap::getName()
{
	return this->name;
}
int ClapTrap::gethitPoints()
{
	return this->hitPoints;
}
int ClapTrap::getEnergyPoints()
{
	return this->energyPoints;
}
int ClapTrap::getAttackDamage()
{
	return this->attackDamage;
}
/*****************************************************/