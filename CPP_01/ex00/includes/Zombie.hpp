/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:39:59 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:40:01 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void) const;


	private:
		std::string	_name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
