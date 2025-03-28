/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:41:03 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/17 21:36:45 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

HumanB::HumanB(std::string name)
	:	__name(name),
		__weapon(NULL)
{	
	std::cout << "HumanB " << __name << " is created!" << std::endl;
}

HumanB::~HumanB()
{	
	std::cout << "HumanB " << __name << " is destroyed!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->__weapon = &weapon;
	std::cout << this->__name << " is now equipped with a " << this->__weapon->getType() << std::endl;
}

void HumanB::attack()
{
	if (this->__weapon)
		std::cout << this->__name << " attacks with their " << this->__weapon->getType() << std::endl;
	else
		std::cout << this->__name << " has no weapon to attack with" << std::endl;
}