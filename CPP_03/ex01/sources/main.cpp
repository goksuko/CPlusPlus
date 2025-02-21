#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap VH("VAULT HUNTER");
	ClapTrap Ninja("NINJA ASSASSIN");

    VH.attack("NINJA ASSASSIN");
    VH.takeDamage(0);
    VH.beRepaired(1);
    VH.takeDamage(9);
    VH.attack("NINJA ASSASSIN");

    VH.beRepaired(1);
    VH.beRepaired(1);
    VH.beRepaired(1);
    VH.beRepaired(1);
    VH.beRepaired(1);
    VH.attack("NINJA ASSASSIN");
    VH.attack("NINJA ASSASSIN");
    VH.attack("NINJA ASSASSIN");
	VH.takeDamage(10);
	VH.takeDamage(20);
    VH.beRepaired(1);

    return (0);
}