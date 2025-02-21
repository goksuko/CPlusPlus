/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:04 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/02/15 12:05:13 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
    std::cout << "HEAP: Zombie is created" << std::endl;
    Zombie *heapZombie = newZombie("heapZombie");
    heapZombie->announce();

    std::cout << std::endl;
    
    std::cout << "STACK: Zombie is created" << std::endl;
    randomChump("stackZombie");

    std::cout << "\nI am calling destructor function by -delete- to destroy HEAP Zombie: " << std::endl;
	delete heapZombie;
	
	return(0);
}