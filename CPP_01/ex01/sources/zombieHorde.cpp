/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:31 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/04 12:07:49 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;
	std::cout << "---inside zombieHorde---" << std::endl;
	std::cout << BLUE << "Zombie *horde = new Zombie[N] ==>"  << RESET << std::endl;
	Zombie *horde = new Zombie[N];
	std::cout << BOLDBLUE << "Zombie *horde = new Zombie[N] ==> is done!" << RESET << std::endl;
	while (i < N)
	{
		std::string new_name = std::__cxx11::to_string(i + 1) + "." + name;
		std::cout << GREEN << "horde[" << i << "] = Zombie(" << new_name << ") ==> "  << RESET << std::endl;
		horde[i] = Zombie(new_name);
		std::cout << BOLDGREEN << "horde[" << i << "] = Zombie(" << new_name << ") ==> is done!" << RESET << std::endl;
		i++;
	}
	return (horde);
}
