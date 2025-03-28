/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:19:58 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/28 17:56:23 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	ptr[0] = &Harl::__debug;
	ptr[1] = &Harl::__info;
	ptr[2] = &Harl::__warning;
	ptr[3] = &Harl::__error;
	ptr[4] = &Harl::__switch_off;
}

Harl::~Harl(void)
{ 
}

void Harl::__debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \nI really do!\n" << std::endl;
}

void Harl::__info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! \nIf you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::__warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::__error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! \nI want to speak to the manager now.\n" << std::endl;
}

void Harl::__switch_off(void)
{
	std::cout << "[ SWITCH ]\nHarl is switched off! \n" << std::endl;
}

void Harl::complain(std::string level) {
	std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "SWITCH"};
    
    int i = 0;
    while (i < 5 && level.compare(levels[i])) 
{
        i++;
    }
    
	switch(i)
	{
	case 0:
		this->__debug();
	case 1:
		this->__info();
	case 2:
		this->__warning();
	case 3:
		this->__error();
		break;
	case 4:
		this->__switch_off();
		break;
	default:
		std::cout << "[ INVALID LEVEL ]\nProbably complaining about insignificant problems!\n";
		break;
	}

}