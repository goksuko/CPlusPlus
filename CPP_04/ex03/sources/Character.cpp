/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:12:15 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/17 20:06:59 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/Materia.hpp"	

Character::Character()
{
	std::cout << "Character: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "Character: Parameterized constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	std::cout << "Character: Copy constructor called" << std::endl;
	*this = copy;
}

// Any copy of a Character must be deep.
// During copy, the Materias of a Character must be deleted 
// before the new ones are added to their inventory. 
Character &Character::operator=(const Character &copy)
{
	std::cout << "Character: Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		_name = copy._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character: Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Invalid Materia" << std::endl;
		return;
	}
	int index = 0;
	while (index < 4 && _inventory[index])
		index++;
	if (index < 4)
	{
		_inventory[index] = m;
		std::cout << "Materia " << m->getType() << " equipped in inventory " << index << std::endl;
	}
	else
		std::cout << "All inventorys are equipped" << std::endl;
}

// The unequip() member function must NOT delete the Materia! (according to the subject)
// so we just set the pointer to NULL
// and let the destructor of the Materia class handle the deletion
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (!_inventory[idx])
		{
			std::cout << "Slot " << idx << " is already empty" << std::endl;
			return;
		}
		delete _inventory[idx];
		_inventory[idx] = NULL;
		std::cout << "Slot " << idx << " unequipped" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

// The use(int, ICharacter&) member function will have to use the Materia at the inventory[idx], and 
// pass the target parameter to the AMateria::use function (according to the subject).
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (!_inventory[idx])
		{
			std::cout << "Slot " << idx << " is empty" << std::endl;
			return;
		}
		_inventory[idx]->use(target);
	}
	else
		std::cout << "Invalid index" << std::endl;
}