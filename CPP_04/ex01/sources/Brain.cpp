#include "../includes/Brain.hpp"
#include "../includes/Animal.hpp"

Brain::Brain() : count(0)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	this->count = copy.count;
	std::cout << "Brain: Copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
    for (int amount = 0; amount < 100; amount++)
		this->ideas[amount] = copy.ideas[amount];
	this->count = copy.count;
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

const std::string& Brain::getIdea(int index) const 
{	
	return this->ideas[index];									
}

void Brain::addIdea(const std::string& idea) 
{	
	if (count == 100) 
	{								
		std::cout << "Brain is full 🧠" << std::endl;			
		return;										
	}
	this->ideas[count++] = idea;					
}