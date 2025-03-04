/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:25 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/04 12:08:50 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
    int i = 0;
    int N = 4;

	std::cout << CYAN << "Zombie *zombies = zombieHorde(N, 'Zombie') ==>" << RESET  << std::endl;
    Zombie *zombies = zombieHorde(N, "Zombie");
	std::cout << BOLDCYAN << "Zombie *zombies = zombieHorde(N, 'Zombie') ==> is done!" << RESET << std::endl;
    while (i < N)
	{
		std::cout << i + 1 << ".Zombie is announcing: " << std::endl;
		zombies[i].announce();
		i++;
	}
	std::cout << RED << "delete [] zombies ==> "  << RESET << std::endl;
	delete [] zombies;
	std::cout << BOLDRED << "delete [] zombies ==> is done!" << RESET << std::endl;
    return(0);
}