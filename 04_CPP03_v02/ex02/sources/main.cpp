/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:22:12 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/04 17:03:06 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"



int main(void)
{
    ClapTrap clapper("CLAPPER");
	ClapTrap Ninja("NINJA ASSASSIN");
    ScavTrap scavver("SCAVVER");
    FragTrap fragger("FRAGGER");

	clapper.takeDamage(5);
    clapper.beRepaired(1);
    clapper.attack("NINJA ASSASSIN");
	clapper.takeDamage(20);
    clapper.beRepaired(1);

    scavver.attack("NINJA ASSASSIN");
    scavver.takeDamage(5);
    scavver.beRepaired(1);
    scavver.guardGate();
    scavver.takeDamage(9);
    scavver.attack("NINJA ASSASSIN");
    scavver.takeDamage(105);
    scavver.beRepaired(1);
    scavver.guardGate();

    fragger.attack("NINJA ASSASSIN");
    fragger.takeDamage(50);
    fragger.beRepaired(11);
    fragger.highFivesGuys();
    fragger.takeDamage(90);
    fragger.attack("NINJA ASSASSIN");
    fragger.highFivesGuys();

    return (0);
}