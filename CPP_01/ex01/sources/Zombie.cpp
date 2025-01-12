/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:28 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/01/11 16:47:58 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name)
	:	_name(name)
{ 
	std::cout << _name << " is created!" << std::endl;
}

Zombie::Zombie(void)
{ 
	std::cout << "A zombie is created!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout <<  _name << " is destroyed!" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}