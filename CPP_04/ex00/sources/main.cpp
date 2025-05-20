/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:20:22 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 15:02:50 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	delete meta;
// 	delete j;
// 	delete i;
		
// 	return 0;
// }

int main()
{
	std::cout << "const Animal* any = new Animal();" << std::endl;
	const Animal* any = new Animal();
	std::cout << "const Animal* puppy = new Dog();" << std::endl;
	const Animal* puppy = new Dog();
	std::cout << "const Animal* kitten = new Cat();" << std::endl;
	const Animal* kitten = new Cat();
	std::cout << "const Cat kitten2;" << std::endl;
	const Cat kitten2;
	std::cout << "any->makeSound();" << std::endl;
	any->makeSound();
	std::cout << "puppy->makeSound();" << std::endl;
	puppy->makeSound();
	std::cout << "kitten->makeSound();" << std::endl;
	kitten->makeSound();
	std::cout << "kitten2.makeSound();" << std::endl;
	kitten2.makeSound(); //will output the cat sound!

	std::cout << "delete(any);" << std::endl;
	delete(any);
	std::cout << "delete(puppy);" << std::endl;
	delete(puppy);
	std::cout << "delete(kitten);" << std::endl;
	delete(kitten);
	std::cout << "kitten2 is deleted automatically" << std::endl;

	std::cout << "***************************" << std::endl;

	std::cout << "const WrongAnimal* any2 = new WrongAnimal();" << std::endl;	
	const WrongAnimal* any2 = new WrongAnimal();
	std::cout << "const WrongAnimal* kitten3 = new WrongCat();" << std::endl;
	const WrongAnimal* kitten3 = new WrongCat();
	std::cout << "const WrongCat kitten4;" << std::endl;
	const WrongCat kitten4;
	std::cout << "any2->makeSound();" << std::endl;
	any2->makeSound();
	std::cout << "kitten3->makeSound();" << std::endl;
	// WrongCat::makeSound() is not virtual, so it will call the WrongAnimal's makeSound()
	kitten3->makeSound(); //will NOT output the cat sound!
	std::cout << "kitten4.makeSound();" << std::endl;
	kitten4.makeSound(); //will output the cat sound!

	std::cout << "delete(any2);" << std::endl;
	delete(any2);
	std::cout << "delete(kitten3);" << std::endl;
	delete(kitten3);	
	std::cout << "kitten4 is deleted automatically" << std::endl;

	return (0);
}