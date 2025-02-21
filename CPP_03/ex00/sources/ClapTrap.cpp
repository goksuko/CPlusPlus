#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Parameterized constructor called for " << name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy)
{
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return *this;
	std::cout << "Copy assignment operator called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << BOLDRED << "ATTACK TO " << target << " by " << this->_name << RESET << std::endl;
	if (this->_hitPoints <= 0)
	{
		std::cout << RED << "Claptrap " << this->_name << " died already." << RESET << std::endl;
        return;
	}
	if (this->_energyPoints >= 1)
	{
		std::cout << RED << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
		this->_energyPoints--;
		std::cout << RED << "Current energy points of " << this->_name << " : " << this->_energyPoints << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "ClapTrap " << this->_name << " does not have enough energy points to attack " << target << " !" << RESET << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << BOLDBLUE  << amount << " POINTS OF DAMAGE TO " << this->_name << RESET << std::endl;
	if (this->_hitPoints <= 0)
	{
		std::cout << BLUE << "Claptrap " << this->_name << " died already." << RESET << std::endl;
        return;
	}
	if ((int)amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << BLUE << "Claptrap " << this->_name << " died. RIP" << RESET << std::endl;
		return;
	}
	else
    {
        std::cout << BLUE << "Claptrap " << this->_name<< " takes " << amount << " damage points!" << RESET << std::endl;
        this->_hitPoints -= amount;
		std::cout << BLUE << "Current hit points of " << this->_name << " : " << this->_hitPoints << RESET << std::endl;    
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << BOLDGREEN  << amount << " POINTS OF REPAIR FOR " << this->_name << RESET << std::endl;
	if (this->_hitPoints <= 0)
	{
		std::cout << GREEN << "Claptrap " << this->_name << " died already." << RESET << std::endl;
        return;
	}
	if (this->_energyPoints >= 1)
	{
		std::cout << GREEN << "ClapTrap " << this->_name << " is reapired, got " << amount << " points back!" << RESET << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << GREEN << "Current energy points of " << this->_name << " : " << this->_energyPoints << RESET << std::endl;
		std::cout << GREEN << "Current hit points of " << this->_name << " : " << this->_hitPoints << RESET << std::endl;
	}
	else
	{
		std::cout << GREEN << "ClapTrap " << this->_name << " does not have enough energy points to be repaired!" << RESET << std::endl;
	}
	return;
}

