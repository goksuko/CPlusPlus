/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:41:00 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/17 21:39:15 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	:	__name(name), 
		__weapon(weapon)
{	
	std::cout << "HumanA " << name << " is created with weapon " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{	
	std::cout << "HumanA " << __name << " is destroyed!" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->__name << " attacks with their " << this->__weapon.getType() << std::endl;
}
