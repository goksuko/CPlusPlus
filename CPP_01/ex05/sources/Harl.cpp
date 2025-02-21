#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::error;
	std::cout << "****Harl created!" << std::endl;
}

Harl::~Harl(void)
{ 
	std::cout << "****Harl destroyed!" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \nI really do!\n" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! \nIf you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! \nI want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int i = 0;
    while (i < 4 && level.compare(levels[i])) {
        i++;
    }
    
    if (i < 4) {
        (this->*ptr[i])();
    } else {
        std::cout << "[ INVALID LEVEL ]\nProbably complaining about insignificant problems!\n";
    }
}