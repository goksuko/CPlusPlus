#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string);
        ~WrongCat();

        WrongCat &operator=(const WrongCat &copy);
        void makeSound() const;
};
