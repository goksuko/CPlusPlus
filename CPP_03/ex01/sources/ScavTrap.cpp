#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "NO_NAME";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: Parameterized constructor called for " << name << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called for " << this->getName() << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << BOLDMAGENTA << "ScavTrap: ATTACK TO " << target << " by " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << MAGENTA << "Claptrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << MAGENTA << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << RESET << std::endl;
		this->getEnergyPoints()--;
		std::cout << MAGENTA << "Current energy points of " << this->getName() << " : " << this->getEnergyPoints() << RESET << std::endl;
	}
	else
	{
		std::cout << MAGENTA << "ScavTrap " << this->getName() << " does not have enough energy points to attack " << target << " !" << RESET << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << BOLDBLUE << "ScavTrap: " << amount << " POINTS OF DAMAGE TO " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << BLUE << "Claptrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if ((int)amount >= this->getHitPoints())
	{
		this->getHitPoints() = 0;
		std::cout << BLUE << "Claptrap " << this->getName() << " died. RIP" << RESET << std::endl;
		return;
	}
	else
    {
        std::cout << BLUE << "Claptrap " << this->getName()<< " takes " << amount << " damage points!" << RESET << std::endl;
        this->getHitPoints() -= amount;
		std::cout << BLUE << "Current hit points of " << this->getName() << " : " << this->getHitPoints() << RESET << std::endl;    
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << BOLDGREEN << "ScavTrap: " << amount << " POINTS OF REPAIR FOR " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << GREEN << "Claptrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << GREEN << "ScavTrap " << this->getName() << " is reapired, got " << amount << " points back!" << RESET << std::endl;
		this->getEnergyPoints()--;
		this->getHitPoints() += amount;
		std::cout << GREEN << "Current energy points of " << this->getName() << " : " << this->getEnergyPoints() << RESET << std::endl;
		std::cout << GREEN << "Current hit points of " << this->getName() << " : " << this->getHitPoints() << RESET << std::endl;
	}
	else
	{
		std::cout << GREEN << "ScavTrap " << this->getName() << " does not have enough energy points to be repaired!" << RESET << std::endl;
	}
	return;
}

