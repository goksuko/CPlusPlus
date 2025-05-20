/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:20:47 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 15:10:33 by akaya-oz      ########   odam.nl         */
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
        Cat(std::string type);
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat();

        void makeSound() const;
        Brain *getBrain() const;
        void addIdea(std::string idea);
        std::string getIdea(int index) const;
};
