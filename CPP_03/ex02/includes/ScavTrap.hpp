#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool _gateKeeper;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &copy);
		~ScavTrap();
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();
};
