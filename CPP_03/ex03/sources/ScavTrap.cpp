#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->_gateKeeper = false;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->_gateKeeper = false;
	std::cout << "ScavTrap: Parameterized constructor called for " << name << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if (this != &copy)
    {
        ScavTrap::operator=(copy);
        this->setName(copy.getName());
    }
    std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called for " << this->getName() << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << BOLDRED << "ScavTrap: ATTACK TO " << target << " by " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << RED << "ScavTrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << RED << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << RESET << std::endl;
		int point = this->getEnergyPoints();
		point--;
		this->setEnergyPoints(point);
		std::cout << RED << "Current energy points of " << this->getName() << " : " << this->getEnergyPoints() << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "ScavTrap " << this->getName() << " does not have enough energy points to attack " << target << " !" << RESET << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << BOLDBLUE << "ScavTrap: " << amount << " POINTS OF DAMAGE TO " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << BLUE << "ScavTrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (amount >= this->getHitPoints())
	{
		this->setHitPoints(0);
		std::cout << BLUE << "ScavTrap " << this->getName() << " died. RIP" << RESET << std::endl;
		return;
	}
	else
    {
        std::cout << BLUE << "ScavTrap " << this->getName()<< " takes " << amount << " damage points!" << RESET << std::endl;
        int point = getHitPoints();
		point -= amount;
		this->setHitPoints(point);
		std::cout << BLUE << "Current hit points of " << this->getName() << " : " << this->getHitPoints() << RESET << std::endl;    
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << BOLDGREEN << "ScavTrap: " << amount << " POINTS OF REPAIR FOR " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << GREEN << "ScavTrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << GREEN << "ScavTrap " << this->getName() << " is reapired, got " << amount << " points back!" << RESET << std::endl;
		int point = this->getEnergyPoints();
		point--;
		this->setEnergyPoints(point);
        point = getHitPoints();
		point -= amount;
		this->setHitPoints(point);
		std::cout << GREEN << "Current energy points of " << this->getName() << " : " << this->getEnergyPoints() << RESET << std::endl;
		std::cout << GREEN << "Current hit points of " << this->getName() << " : " << this->getHitPoints() << RESET << std::endl;
	}
	else
	{
		std::cout << GREEN << "ScavTrap " << this->getName() << " does not have enough energy points to be repaired!" << RESET << std::endl;
	}
	return;
}

void ScavTrap::guardGate()
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << BOLDCYAN << "ScavTrap " << this->getName() << " died already. Do you still want they to keep your gate?" << RESET << std::endl << std::endl;
        return;
	}
	std::cout << BOLDCYAN << "ScavTrap: " << this->getName() << " IS NOW A GATE KEEPER " << RESET << std::endl << std::endl;
	this->_gateKeeper = true;
	return;
}


