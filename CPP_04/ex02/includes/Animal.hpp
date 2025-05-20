/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/03 18:21:19 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/16 17:45:43 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

#include <iostream>
#include <string>
#include "Brain.hpp"

// To make the `Animal` class non-instantiable, 
// we need to declare at least one **pure virtual function** in the class. 
// This makes the class an **abstract class**, which cannot be instantiated directly. 
// Since `Animal` already has a `makeSound()` function, we can make it pure virtual.

// 1. **Pure Virtual Function**: The `= 0` syntax in `virtual void makeSound() const = 0;` makes `makeSound()` a pure virtual function. 
// This means that derived classes must provide an implementation for this function.
// 2. **Abstract Class**: Declaring a pure virtual function makes `Animal` an abstract class, which cannot be instantiated directly.
// 3. **Derived Classes**: Any class inheriting from `Animal` (e.g., `Cat`, `Dog`) must implement the `makeSound()` function to be instantiable.

// This ensures that `Animal` serves only as a base class and cannot be instantiated on its own.

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();

        virtual void makeSound() const = 0;
        std::string getType() const;
};
