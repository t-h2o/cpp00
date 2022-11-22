#include	"ClapTrap.hpp"
#include	"ScavTrap.hpp"
#include	<iostream>

#define		COL_RED	"\033[31;1m"
#define		COL_GRE	"\033[32;1m"
#define		COL_RES	"\033[0m"

#define		TYPE_OBJ	ScavTrap
#define		TAKEDAMMAGE	40

static void
	test_assignation_operator(void)
{
	TYPE_OBJ	paul("Paul");
	TYPE_OBJ	saul("Saul");

	paul.printData();
	paul.takeDamage(3);
	paul.beRepaired(5);
	paul.printData();

	saul.printData();
	saul = paul;
	saul.printData();
}

static void
	test_copy_constructor(void)
{
	TYPE_OBJ	paul("Paul");

	paul.printData();
	paul.takeDamage(3);
	paul.beRepaired(5);
	paul.printData();

	TYPE_OBJ	saul(paul);
	saul.printData();
}

static void
	test_takeDamage(void)
{
	TYPE_OBJ	jean("Jean");
	
	jean.printData();
	for (int i = 1; i <= 2; i++)
	{
		for (int i = 1; i <= 6; i++)
		{
			std::cout << i << ": ";
			jean.takeDamage(TAKEDAMMAGE);
		}
		jean.printData();
	}
}

static void
	test_beRepaired(void)
{
	TYPE_OBJ	john("John");
	
	
	john.printData();
	for (int i = 1; i <= 2; i++)
	{
		for (int i = 1; i <= 6; i++)
		{
			std::cout << i << ": ";
			john.beRepaired(5);
		}
		john.printData();
	}
}

static void
	test_attack(void)
{
	TYPE_OBJ	marc("Marc");
	
	for (int i = 1; i <= 2; i++)
	{
		for (int i = 1; i <= 6; i++)
		{
			std::cout << i << ": ";
			marc.attack("Ennemy");
		}
		marc.printData();
	}
}

static void
	test_gateKeeper(void)
{
	ScavTrap	keeper("Keeper");

	keeper.guardGate();
}

static void
	test_message(std::string message, void (*f)(void))
{
	std::cout
		<< COL_GRE
		<< "START of "
		<< message
		<< COL_RES
		<< std::endl;
	f();
	std::cout
		<< COL_RED
		<< "START of "
		<< "END of "
		<< message
		<< COL_RES
		<< std::endl
		<< std::endl;
}

int	main(void)
{
	test_message("Test takeDamage", &test_takeDamage);
	test_message("Test attack", &test_attack);
	test_message("Test beRepaired", &test_beRepaired);
	test_message("Test copyConstructor", &test_copy_constructor);
	test_message("Test assignationOperator", &test_assignation_operator);
	test_message("Test gateKeeper", &test_gateKeeper);

	return 0;
}
