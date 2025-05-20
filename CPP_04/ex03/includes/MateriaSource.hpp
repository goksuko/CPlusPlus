/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:12:07 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/20 10:25:48 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Materia.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
	
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    private:
		std::string _type;
		AMateria* _inventory[4];

	public:
		MateriaSource();
		MateriaSource(std::string type);
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &copy);
		virtual ~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const &type);
		void print_inventories(void) const;
};