/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:11:52 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/17 20:05:38 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Materia.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	protected:
		std::string _name;
		AMateria* _inventory[4];
	
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &copy);
		Character &operator=(const Character &copy);
		~Character();

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};