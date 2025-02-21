#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"



int main(void)
{
    ClapTrap CLAPPER("CLAPPER");
	ClapTrap Ninja("NINJA ASSASSIN");
    ScavTrap SCAVVER("SCAVVER");
    FragTrap FRAGGER("FRAGGER");

	CLAPPER.takeDamage(5);
    CLAPPER.beRepaired(1);
    CLAPPER.attack("NINJA ASSASSIN");
	CLAPPER.takeDamage(20);
    CLAPPER.beRepaired(1);

    SCAVVER.attack("NINJA ASSASSIN");
    SCAVVER.takeDamage(5);
    SCAVVER.beRepaired(1);
    SCAVVER.guardGate();
    SCAVVER.takeDamage(9);
    SCAVVER.attack("NINJA ASSASSIN");
    SCAVVER.takeDamage(105);
    SCAVVER.beRepaired(1);
    SCAVVER.guardGate();

    FRAGGER.attack("NINJA ASSASSIN");
    FRAGGER.takeDamage(50);
    FRAGGER.beRepaired(11);
    FRAGGER.highFivesGuys();
    FRAGGER.takeDamage(90);
    FRAGGER.attack("NINJA ASSASSIN");
    FRAGGER.highFivesGuys();

    return (0);
}