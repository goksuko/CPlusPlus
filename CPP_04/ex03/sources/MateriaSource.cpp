/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:12:33 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/20 10:25:48 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(std::string type)
{
	std::cout << "MateriaSource: Parameterized constructor called" << std::endl;
	_type = type;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource: Copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource: Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = copy._inventory[i]->clone();
		}
		_type = copy._type;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource: Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria* m)
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
		std::cout << "Materia " << m->getType() << " is acknowledged in inventory " << index << std::endl;
	}
	else
		std::cout << "All _inventorys are equipped" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
		{
			std::cout << "Materia " << type << " is created" << std::endl;
			return _inventory[i]->clone();
		}
	}
	std::cout << "Materia " << type << " cannot be created, not a learned Materia" << std::endl;
	return NULL;
}

void MateriaSource::print_inventories() const
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			std::cout << "inventory " << i << ": " << _inventory[i]->getType() << std::endl;
		else
			std::cout << "inventory " << i << ": empty" << std::endl;
	}
}