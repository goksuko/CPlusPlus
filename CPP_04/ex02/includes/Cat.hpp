/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:21:24 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/04/03 18:21:25 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat();

        void makeSound() const;
        Brain *getBrain() const;
        void addIdea(std::string idea);
        std::string getIdea(int index) const;
};
