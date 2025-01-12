#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::error;
	ptr[4] = &Harl::switch_off;
	// std::cout << "****Harl created!" << std::endl;
}

Harl::~Harl(void)
{ 
	// std::cout << "****Harl destroyed!" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \nI really do!\n" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! \nIf you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable! \nI want to speak to the manager now.\n" << std::endl;
}

void Harl::switch_off( void )
{
	std::cout << "[ SWITCH ]\nHarl is switched off! \n" << std::endl;
}

void Harl::complain(std::string level) {
    void (Harl::*ptr[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
		&Harl::switch_off
    };    
	std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "SWITCH"};
    
    int i = 0;
    while (i < 5 && level.compare(levels[i])) {
        i++;
    }
    
	if (i == 4) {
		(this->*ptr[i])();
	} else if (i < 4) {
		while (i < 4) {
			(this->*ptr[i])();
			i++;
		}
    } else {
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}