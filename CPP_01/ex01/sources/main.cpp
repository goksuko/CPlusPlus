/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:25 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:40:26 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
    int i = 0;
    int N = 3;

    Zombie *zombies = zombieHorde(N, "Zombie");
    while (i < N)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
    return(0);
}