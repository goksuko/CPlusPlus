/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:31 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/01/11 16:47:43 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie *horde = new Zombie[N];
	std::cout << "Getting into the while loop!" << std::endl;
	while (i < N)
	{
		std::string new_name = std::__cxx11::to_string(i + 1) + "." + name;
		horde[i] = Zombie(new_name);
		i++;
	}
	return (horde);
}
