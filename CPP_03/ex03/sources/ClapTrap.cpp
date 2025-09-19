/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:22:33 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/15 12:43:07 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "NAME";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap: Parameterized constructor called for " << name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy)
{
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	_name = "NAME";
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called for " << _name << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << BOLDRED << "ClapTrap: ATTACK TO " << target << " by " << _name << RESET << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << RED << "Claptrap " << _name << " died already." << RESET << std::endl;
        return;
	}
	if (_energyPoints >= 1)
	{
		std::cout << RED << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
		_energyPoints--;
		std::cout << RED << "Current energy points of " << _name << " : " << _energyPoints << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "ClapTrap " << _name << " does not have enough energy points to attack " << target << " !" << RESET << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << BOLDBLUE << "ClapTrap: " << amount << " POINTS OF DAMAGE TO " << _name << RESET << std::endl;
	if (amount <= 0 || amount > std::numeric_limits<unsigned int>::max())
	{
		std::cout << BLUE << "Invalid amount. Claptrap " << _name << " is not damaged." << RESET << std::endl;
		return;
	}	
	if (_hitPoints <= 0)
	{
		std::cout << BLUE << "Claptrap " << _name << " died already." << RESET << std::endl;
        return;
	}
	if ((int)amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << BLUE << "Claptrap " << _name << " died. RIP" << RESET << std::endl;
		return;
	}
	else
    {
        std::cout << BLUE << "Claptrap " << _name<< " takes " << amount << " damage points!" << RESET << std::endl;
        _hitPoints -= amount;
		std::cout << BLUE << "Current hit points of " << _name << " : " << _hitPoints << RESET << std::endl;    
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << BOLDGREEN << "ClapTrap: " << amount << " POINTS OF REPAIR FOR " << _name << RESET << std::endl;
	if (amount <= 0 || amount > std::numeric_limits<unsigned int>::max())
	{
		std::cout << GREEN << "Invalid amount. Claptrap " << _name << " is not repaired." << RESET << std::endl;
		return;
	}
	if (_hitPoints <= 0)
	{
		std::cout << GREEN << "Claptrap " << _name << " died already." << RESET << std::endl;
        return;
	}
	if (_energyPoints >= 1)
	{
		std::cout << GREEN << "ClapTrap " << _name << " is repaired, got " << amount << " points back!" << RESET << std::endl;
		_energyPoints--;
		_hitPoints += amount;
		std::cout << GREEN << "Current energy points of " << _name << " : " << _energyPoints << RESET << std::endl;
		std::cout << GREEN << "Current hit points of " << _name << " : " << _hitPoints << RESET << std::endl;
	}
	else
	{
		std::cout << GREEN << "ClapTrap " << _name << " does not have enough energy points to be repaired!" << RESET << std::endl;
	}
	return;
}
