#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    this->_name = "NAME";
	this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), FragTrap(), ScavTrap()
{
    this->setName(ClapTrap::getName() + "_clap_name");
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap: Parameterized constructor called for " << name << "." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    *this = copy;
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
        FragTrap::operator=(copy);
        ScavTrap::operator=(copy);
        _name = copy._name;
    }
    std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: Destructor called for " << this->getName() << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	std::cout << BOLDRED << "DiamondTrap: ATTACK TO " << target << " by " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << RED << "DiamondTrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << RED << "DiamondTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << RESET << std::endl;
		int point = this->getEnergyPoints();
		point--;
		this->setEnergyPoints(point);
		std::cout << RED << "Current energy points of " << this->getName() << " : " << this->getEnergyPoints() << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "DiamondTrap " << this->getName() << " does not have enough energy points to attack " << target << " !" << RESET << std::endl;
	}
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << BOLDBLUE << "DiamondTrap: " << amount << " POINTS OF DAMAGE TO " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << BLUE << "DiamondTrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (amount >= this->getHitPoints())
	{
		this->setHitPoints(0);
		std::cout << BLUE << "DiamondTrap " << this->getName() << " died. RIP" << RESET << std::endl;
		return;
	}
	else
    {
        std::cout << BLUE << "DiamondTrap " << this->getName()<< " takes " << amount << " damage points!" << RESET << std::endl;
        int point = getHitPoints();
		point -= amount;
		this->setHitPoints(point);
		std::cout << BLUE << "Current hit points of " << this->getName() << " : " << this->getHitPoints() << RESET << std::endl;    
	}
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << BOLDGREEN << "DiamondTrap: " << amount << " POINTS OF REPAIR FOR " << this->getName() << RESET << std::endl;
	if (this->getHitPoints() <= 0)
	{
		std::cout << GREEN << "DiamondTrap " << this->getName() << " died already." << RESET << std::endl;
        return;
	}
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << GREEN << "DiamondTrap " << this->getName() << " is reapired, got " << amount << " points back!" << RESET << std::endl;
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
		std::cout << GREEN << "DiamondTrap " << this->getName() << " does not have enough energy points to be repaired!" << RESET << std::endl;
	}
	return;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << BOLDCYAN << "DiamondTrap: My name is " << this->getName() << " and my ClapTrap name is " << ClapTrap::getName() << RESET << std::endl << std::endl;
}



