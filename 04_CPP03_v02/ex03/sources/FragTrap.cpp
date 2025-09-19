/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:22:39 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/04 16:58:51 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_name = "NAME";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap: Parameterized constructor called for " << name << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
    return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called for " << _name << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (_hitPoints <= 0)
	{
		std::cout << BOLDCYAN << "FragTrap " << _name << " died already. No high fives for today!" << RESET << std::endl << std::endl;
        return;
	}
	std::cout << BOLDCYAN << "FragTrap: " << _name << " IS ASKING FOR A HIGH FIVE ;) " << RESET << std::endl << std::endl;
	return;
}


