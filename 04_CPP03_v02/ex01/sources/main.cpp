/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:21:42 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/04 16:23:40 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"


int main(void)
{
    ClapTrap clapper("CLAPPER");
	ClapTrap Ninja("NINJA ASSASSIN");
    ScavTrap scavver("SCAVVER");

    scavver.attack("NINJA ASSASSIN");
    scavver.takeDamage(5);
    scavver.beRepaired(1);
    scavver.guardGate();
    scavver.takeDamage(9);
    scavver.attack("NINJA ASSASSIN");

	clapper.takeDamage(5);
    clapper.beRepaired(1);
    clapper.attack("NINJA ASSASSIN");
	clapper.takeDamage(20);
    clapper.beRepaired(1);

    return (0);
}