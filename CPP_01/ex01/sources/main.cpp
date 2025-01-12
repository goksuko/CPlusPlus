/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:25 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/01/11 16:57:28 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
    int i = 0;
    int N = 4;

    Zombie *zombies = zombieHorde(N, "Zombie");
    while (i < N)
	{
		std::cout << "Zombie " << i + 1 << " is announcing!" << std::endl;
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
    return(0);
}