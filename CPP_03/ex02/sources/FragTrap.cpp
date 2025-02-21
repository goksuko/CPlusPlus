#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap: Parameterized constructor called for " << name << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
        this->setName(copy.getName());
    }
    std::cout << "FragTrap: Copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called for " << this->getName() << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << BOLDRED << "FragTrap: ATTACK TO " << target << " by " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << RED << "FragTrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << RED << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << RESET << std::endl;
		int point = this->getEnergyPoints();
		point--;
		this->setEnergyPoints(point);
		std::cout << RED << "Current energy points of " << this->getName() << " : " << this->getEnergyPoints() << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "FragTrap " << this->getName() << " does not have enough energy points to attack " << target << " !" << RESET << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << BOLDBLUE << "FragTrap: " << amount << " POINTS OF DAMAGE TO " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << BLUE << "FragTrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (amount >= this->getHitPoints())
	{
		this->setHitPoints(0);
		std::cout << BLUE << "FragTrap " << this->getName() << " died. RIP" << RESET << std::endl;
		return;
	}
	else
    {
        std::cout << BLUE << "FragTrap " << this->getName()<< " takes " << amount << " damage points!" << RESET << std::endl;
        int point = getHitPoints();
		point -= amount;
		this->setHitPoints(point);
		std::cout << BLUE << "Current hit points of " << this->getName() << " : " << this->getHitPoints() << RESET << std::endl;    
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << BOLDGREEN << "FragTrap: " << amount << " POINTS OF REPAIR FOR " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << GREEN << "FragTrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << GREEN << "FragTrap " << this->getName() << " is reapired, got " << amount << " points back!" << RESET << std::endl;
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
		std::cout << GREEN << "FragTrap " << this->getName() << " does not have enough energy points to be repaired!" << RESET << std::endl;
	}
	return;
}

void FragTrap::highFivesGuys()
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << BOLDCYAN << "FragTrap " << this->getName() << " died already. No high fives for today!" << RESET << std::endl << std::endl;
        return;
	}
	std::cout << BOLDCYAN << "FragTrap: " << this->getName() << " IS ASKING FOR A HIGH FIVE ;) " << RESET << std::endl << std::endl;
	return;
}


