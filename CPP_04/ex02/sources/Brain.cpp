/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:21:37 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/14 10:54:40 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include "../includes/Animal.hpp"

Brain::Brain() : count(0)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	count = copy.count;
	std::cout << "Brain: Copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
    for (int amount = 0; amount < 100; amount++)
		ideas[amount] = copy.ideas[amount];
	count = copy.count;
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

const std::string& Brain::getIdea(int index) const 
{	
	return ideas[index];									
}

void Brain::addIdea(const std::string& idea) 
{	
	if (count == 100) 
	{								
		std::cout << "Brain is full 🧠" << std::endl;			
		return;										
	}
	ideas[count++] = idea;					
}