/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:13 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/17 17:02:43 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name)
{ 
    this->__name = name; // Assign value to member variable
    std::cout << __name << " is created!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << __name << " is destroyed!" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << __name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}