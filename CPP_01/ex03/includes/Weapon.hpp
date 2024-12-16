/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:40:56 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:40:58 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();

		const std::string &getType();
		void setType(std::string type);

	private:
		std::string _type;
};

#endif
