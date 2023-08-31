#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


class Base{
	public:
	Base()
	{
		std::cout << "Base constructor" << std::endl;
	}
	virtual void print()
	{
		std::cout << "hello base class" << std::endl;
	}
	void show()
	{
		std::cout << "show base class" << std::endl;
	}
};

class Derived : public Base 
{
	public:
		Derived()
		{
			std::cout << "derived constructor" << std::endl;
		}
		void print()
		{
			std::cout << "hello derived class" << std::endl;
		}
		void show()
		{
			std::cout << "show derived class" << std::endl;
		}

};




int main()
{
	// ClapTrap clapTrap("Clappy");

	// clapTrap.attack("Enemy");
	// clapTrap.takeDamage(5);
	// clapTrap.beRepaired(3);
	// clapTrap.printInfo();

	ScavTrap scvatrap;
	scvatrap.printInfo();
}