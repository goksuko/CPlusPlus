/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:41:00 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:41:01 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	:	_name(name), 
		_weapon(weapon)
{	}

HumanA::~HumanA()
{	}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
