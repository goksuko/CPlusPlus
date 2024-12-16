/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:04 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:40:05 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
    std::cout << "HEAP: Zombie is created" << std::endl;
    Zombie *heapZombie = newZombie("heapZombie");
    heapZombie->announce();


    std::cout << "STACK: Zombie is created" << std::endl;
    randomChump("stackZombie");

    std::cout << "I am calling destructor function by -delete- to destroy HEAP Zombie: " << std::endl;
	delete heapZombie;
	
	return(0);
}