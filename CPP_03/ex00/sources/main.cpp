#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap CLAPPER("CLAPPER");
	ClapTrap Ninja("NINJA ASSASSIN");

    CLAPPER.attack("NINJA ASSASSIN");
    CLAPPER.takeDamage(0);
    CLAPPER.beRepaired(1);
    CLAPPER.takeDamage(9);
    CLAPPER.attack("NINJA ASSASSIN");

    CLAPPER.beRepaired(1);
    CLAPPER.beRepaired(1);
    CLAPPER.beRepaired(1);
    CLAPPER.beRepaired(1);
    CLAPPER.beRepaired(1);
    CLAPPER.attack("NINJA ASSASSIN");
    CLAPPER.attack("NINJA ASSASSIN");
    CLAPPER.attack("NINJA ASSASSIN");
	CLAPPER.takeDamage(10);
	CLAPPER.takeDamage(20);
    CLAPPER.beRepaired(1);

    return (0);
}