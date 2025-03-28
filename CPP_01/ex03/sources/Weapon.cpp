/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:41:08 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/17 21:40:22 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->__type = type;
}

Weapon::~Weapon()
{	
	std::cout << "Weapon is destroyed!" << std::endl;
}

const std::string &Weapon::getType() const
{
	return this->__type;
}

void Weapon::setType(std::string type)
{
	this->__type = type;
	std::cout << "Weapon type is set to " << this->__type << std::endl;
}
