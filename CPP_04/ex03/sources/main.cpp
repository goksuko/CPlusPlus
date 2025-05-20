/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:12:26 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/20 10:25:48 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Materia.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

// int main()
// {
// 	std::cout << BOLDBLUE << std::endl;
// 	IMateriaSource* src = new MateriaSource();

// 	std::cout << CYAN << std::endl;
// 	src->learnMateria(new Ice());

// 	std::cout << YELLOW << std::endl;
// 	src->learnMateria(new Cure());
// 	dynamic_cast<MateriaSource*>(src)->print_inventories();
	
// 	std::cout << MAGENTA << std::endl;
// 	ICharacter* me = new Character("me");
	
// 	std::cout << GREEN << std::endl;
// 	AMateria* tmp;
// 	tmp = src->createMateria("newbea");

// 	std::cout << BLUE << std::endl;
// 	tmp = src->createMateria("ice");
	
// 	std::cout << RED << std::endl;
// 	me->equip(tmp);

// 	std::cout << CYAN << std::endl;
// 	tmp = src->createMateria("cure");

// 	std::cout << YELLOW << std::endl;
// 	me->equip(tmp);

// 	std::cout << MAGENTA << std::endl;
// 	ICharacter* bob = new Character("bob");

// 	std::cout << GREEN << std::endl;
// 	me->use(0, *bob);

// 	std::cout << BLUE << std::endl;
// 	me->use(1, *bob);

// 	std::cout << RESET << std::endl;
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }