#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"


int main(void)
{
    ClapTrap CLAPPER("CLAPPER");
	ClapTrap Ninja("NINJA ASSASSIN");
    ScavTrap SCAVVER("SCAVVER");

    SCAVVER.attack("NINJA ASSASSIN");
    SCAVVER.takeDamage(5);
    SCAVVER.beRepaired(1);
    SCAVVER.guardGate();
    SCAVVER.takeDamage(9);
    SCAVVER.attack("NINJA ASSASSIN");

	CLAPPER.takeDamage(5);
    CLAPPER.beRepaired(1);
    CLAPPER.attack("NINJA ASSASSIN");
	CLAPPER.takeDamage(20);
    CLAPPER.beRepaired(1);

    return (0);
}