/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:04 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/17 21:11:48 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
    std::cout << BLUE << "HEAP: Zombie is created" << std::endl;
    Zombie *heapZombie = newZombie("heapZombie");
    heapZombie->announce();
    std::cout << std::endl;
    
    std::cout << GREEN << "STACK: Zombie is created" << std::endl;
    randomChump("stackZombie");

    std::cout << RED << "\nI am calling destructor function by -delete- to destroy HEAP Zombie: " << std::endl;
	delete heapZombie;
	std::cout << RESET << std::endl;
	return(0);
}