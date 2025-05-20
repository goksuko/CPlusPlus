/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:21:05 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 17:39:23 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"

// https://sezertanriverdi.medium.com/shallow-copy-vs-deep-copy-k%C4%B1sa-bak%C4%B1%C5%9F-9955720db1c8

#define TOTAL_ANIMALS 6

int main()
{
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << "i is a " << i->getType() << "." << std::endl;
	std::cout << "j is a " << j->getType() << "." << std::endl;
	i->makeSound();
	j->makeSound();

	delete(j);
	delete(i);

	std::cout << "***************************" << std::endl;

	std::cout << BLUE;
	Animal	*animals[TOTAL_ANIMALS];
	for (int n = 0; n < TOTAL_ANIMALS; n++)
	{
		std::cout << "--- i: " << n << ", TOTAL: " << TOTAL_ANIMALS << std::endl;
		if (n % 2 == 0)
			animals[n] = new Dog();	
		else
			animals[n] = new Cat();
		std::cout << std::endl;
	}
	std::cout << RESET;

	for (int n = 0; n < TOTAL_ANIMALS; n++)
		delete animals[n];
		
	// Test deep copy
	std::cout << "***************************" << std::endl;
	std::cout << MAGENTA;
	std::cout << "Testing deep copy:" << std::endl;
	
	// In this example, we create an `originalDog` object and 
	// add some ideas to its `Brain`. 
	// We then create a `copiedDog` object using the copy constructor. 
	// We add a new idea to the `Brain` of the `copiedDog` and 
	// print the ideas of both `originalDog` and `copiedDog` to verify that 
	// they are independent of each other. 
	// This ensures that the copy is a deep copy.
	std::cout << RESET;

	Dog originalDog;
	originalDog.getBrain()->addIdea("Original Dog Idea 1");
	originalDog.getBrain()->addIdea("Original Dog Idea 2");

	Dog copiedDog = originalDog; // DEEP COPY constructor

	originalDog.getBrain()->addIdea("Original Dog Idea 3");

	std::cout << MAGENTA;
	std::cout << "Original Dog Brain Ideas:" << std::endl;
	std::cout << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << originalDog.getBrain()->getIdea(1) << std::endl;
	std::cout << originalDog.getBrain()->getIdea(2) << std::endl;

	std::cout << std::endl << "Copied Dog Brain Ideas:" << std::endl;
	std::cout << copiedDog.getBrain()->getIdea(0) << std::endl;
	std::cout << copiedDog.getBrain()->getIdea(1) << std::endl;
	std::cout << copiedDog.getBrain()->getIdea(2) << std::endl;

	std::cout << RESET;

	// Test shallow copy
	std::cout << "***************************" << std::endl;
	std::cout << CYAN;
	std::cout << "Testing shallow copy:" << std::endl;
	std::cout << RESET;

	Cat originalCat;
	originalCat.getBrain()->addIdea("Original Cat Idea 1");
	originalCat.getBrain()->addIdea("Original Cat Idea 2");

	Cat *copiedCat = &originalCat; // SHALLOW COPY constructor
	originalCat.getBrain()->addIdea("Original Cat Idea 3");

	std::cout << CYAN;
	std::cout << "Original Cat Brain Ideas:" << std::endl;
	std::cout << originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << originalCat.getBrain()->getIdea(1) << std::endl;
	std::cout << originalCat.getBrain()->getIdea(2) << std::endl;

	std::cout << std::endl << "Copied Cat Brain Ideas:" << std::endl;
	std::cout << copiedCat->getBrain()->getIdea(0) << std::endl;
	std::cout << copiedCat->getBrain()->getIdea(1) << std::endl;
	std::cout << copiedCat->getBrain()->getIdea(2) << std::endl;

	std::cout << RESET;
	return (0);
}