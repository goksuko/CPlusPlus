/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:22:36 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/15 13:00:22 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    _name = "NameNotProvided";
    ClapTrap::_name = _name + "_clap_name";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : FragTrap(name), ScavTrap(name)
{
    _name = name;
    ClapTrap::_name = _name + "_clap_name";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap: Parameterized constructor called for " << name << "." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    *this = copy;
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
    if(this == &copy)
        return *this;
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: Destructor called for " << _name << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << BOLDCYAN << "DiamondTrap: My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << RESET << std::endl << std::endl;
}

