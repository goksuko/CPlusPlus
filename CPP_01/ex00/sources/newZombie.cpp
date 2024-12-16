/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:07 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:40:08 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}
