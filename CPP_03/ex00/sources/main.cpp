/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:21:23 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/15 12:43:21 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap clapper("CLAPPER");
	ClapTrap Ninja("NINJA ASSASSIN");
    ClapTrap clapper2("CLAPPER 2");

    clapper.attack("NINJA ASSASSIN");
    clapper.takeDamage(0);
    clapper.beRepaired(1);
    clapper.takeDamage(-9);
    clapper.attack("NINJA ASSASSIN");

    clapper.beRepaired(1);
    clapper.beRepaired(1);
    clapper.beRepaired(1);
    clapper.beRepaired(1);
    clapper.beRepaired(1);
    clapper.attack("NINJA ASSASSIN");
    clapper.attack("NINJA ASSASSIN");
    clapper.attack("NINJA ASSASSIN");
	clapper.takeDamage(10);
	clapper.takeDamage(20);
    clapper.beRepaired(1);
    Ninja.beRepaired(100);

    clapper2.takeDamage(100);
    clapper2.takeDamage(1);
    clapper2.attack("CLAPPER");
    Ninja.attack("CLAPPER");
    Ninja.attack("CLAPPER2");
    

    return (0);
}