#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string);
        ~Cat();

        Cat &operator=(const Cat &copy);
        void makeSound() const;
};
