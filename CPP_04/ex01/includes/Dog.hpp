#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        ~Dog();

        void makeSound() const;
        Brain *getBrain() const;
        void addIdea(std::string idea);
        std::string getIdea(int index) const;
};
