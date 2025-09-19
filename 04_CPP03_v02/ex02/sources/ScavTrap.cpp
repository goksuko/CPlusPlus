/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:21:45 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/15 12:51:49 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	_name = "NameNotProvided";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_gateKeeper = false;
	std::cout << "ScavTrap: Default constructor called for " << _name << "." << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_gateKeeper = false;
	std::cout << "ScavTrap: Parameterized constructor called for " << name << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
    if (this == &copy)
		return *this;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	_gateKeeper = copy._gateKeeper;
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called for " << _name << std::endl;
}


void ScavTrap::attack(std::string const &target)
{
	std::cout << BOLDRED << "ATTACK TO " << target << " by " << _name << RESET << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << RED << "Scavtrap " << _name << " died already." << RESET << std::endl;
		return;
	}
	if (_energyPoints >= 1)
	{
		std::cout << RED << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
		_energyPoints--;
		std::cout << RED << "Current energy points of " << _name << " : " << _energyPoints << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "ScavTrap " << _name << " does not have enough energy points to attack " << target << " !" << RESET << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (_hitPoints <= 0)
	{
		std::cout << BOLDCYAN << "ScavTrap " << _name << " died already. Do you still want they to keep your gate?" << RESET << std::endl << std::endl;
        return;
	}
	std::cout << BOLDCYAN << "ScavTrap: " << _name << " IS NOW A GATE KEEPER " << RESET << std::endl << std::endl;
	_gateKeeper = true;
	return;
}


