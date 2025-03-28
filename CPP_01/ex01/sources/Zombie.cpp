/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:28 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/17 21:14:26 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name)
{ 
	this->__name = name;
	std::cout << __name << " is created!" << std::endl;
}

Zombie::Zombie(void)
{ 
	std::cout << "A zombie is created!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout <<  __name << " is destroyed!" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << __name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}