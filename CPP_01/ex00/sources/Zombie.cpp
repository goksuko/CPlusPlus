/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:13 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/01/11 16:05:33 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// Zombie::Zombie(std::string name)
//     : _name(name) // Correctly initialize the member variable
// { 
//     std::cout << _name << " is created!" << std::endl;
// }

// Zombie::Zombie(std::string name)
// { 
//     std::string _name = name; // This creates a local variable, not the member variable
//     std::cout << _name << " is created!" << std::endl;
// }

Zombie::Zombie(std::string name)
{ 
    this->_name = name; // Assign value to member variable
    std::cout << _name << " is created!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << _name << " is destroyed!" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}