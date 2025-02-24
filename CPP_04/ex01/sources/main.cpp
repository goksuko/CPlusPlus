#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"

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
	for (int i = 0; i < TOTAL_ANIMALS; i++)
	{
		std::cout << "--- i: " << i << ", TOTAL: " << TOTAL_ANIMALS << std::endl;
		if (i % 2 == 0)
			animals[i] = new Dog();	
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << RESET;

	for (int i = 0; i < TOTAL_ANIMALS; i++)
		delete animals[i];
		
	// Test deep copy
	std::cout << "***************************" << std::endl;
	
	// In this example, we create an `originalDog` object and 
	// add some ideas to its `Brain`. 
	// We then create a `copiedDog` object using the copy constructor. 
	// We add a new idea to the `Brain` of the `copiedDog` and 
	// print the ideas of both `originalDog` and `copiedDog` to verify that 
	// they are independent of each other. 
	// This ensures that the copy is a deep copy.

	std::cout << "Testing deep copy:" << std::endl;

	Dog originalDog;
	originalDog.getBrain()->addIdea("Original Dog Idea 1");
	originalDog.getBrain()->addIdea("Original Dog Idea 2");

	Dog copiedDog = originalDog; // Copy constructor
	copiedDog.getBrain()->addIdea("Copied Dog Idea 1");

	std::cout << MAGENTA;

	std::cout << "Original Dog Brain Ideas:" << std::endl;
	std::cout << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << originalDog.getBrain()->getIdea(1) << std::endl;
	std::cout << originalDog.getBrain()->getIdea(2) << std::endl;

	std::cout << "Copied Dog Brain Ideas:" << std::endl;
	std::cout << copiedDog.getBrain()->getIdea(0) << std::endl;
	std::cout << copiedDog.getBrain()->getIdea(1) << std::endl;
	std::cout << copiedDog.getBrain()->getIdea(2) << std::endl;

	std::cout << RESET;
	return (0);
}