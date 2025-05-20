/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:20:50 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/03 18:20:51 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
