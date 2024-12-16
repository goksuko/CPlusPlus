/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:31 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:40:35 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie *horde = new Zombie[N];
	while (i < N)
	{
		horde[i] = Zombie(name);
		i++;
	}
	return (horde);
}
